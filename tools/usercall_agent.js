// NOTES:
// * for some reason reg args are treated as "used" aka overwritten even if they aren't used
//   - this means functions with reg args other than eax, ecx, and edx will not match yet
// * The 0xC member of Type_t in the front-end is being used for typedef stuff, so we can't use it
// * figure out if the compiler ever passes floats in st regs
// * figure out if we need spoils?
// * force storing base pointer
// * force inline/no inline per call

function check_checksum(name, base, expected) {
  let e_lfanew = base.add(0x3c).readU32();
  let actual = base.add(e_lfanew + 0x58).readU32();
  if (actual != expected) {
    throw new Error(
      `Invalid checksum for ${name}. Got ${actual}, expected ${expected}`
    );
  }
}

// Mapping from our reg ids to msvcs reg ids
// Index is our reg id, value is msvcs reg id
// 0 - Invalid
// 1 - EAX
// 2 - ECX
// 3 - EDX
// 4 - EBX
// 5 - ESP
// 6 - EBP
// 7 - ESI
// 8 - EDI
let REGS_LOOKUP = [1, 4, 2, 3, 7, 8];

function patch_jump(from, to) {
  Memory.patchCode(from, 5, (code) => {
    var cw = new X86Writer(from, { pc: from });
    cw.putJmpAddress(to);
    cw.flush();
  });
}

function patch_jumps(jumps) {
  for (const [from, to] of jumps) {
    patch_jump(from, to);
  }
}

function setup_usercall_parser(
  tok_fastcall,
  tok_int,
  tokstrings_size,
  yylex,
  usercall_module
) {
  let peak_token = new NativeFunction(
    usercall_module.peak_token,
    "pointer",
    []
  );
  let get_token = new NativeFunction(usercall_module.get_token, "pointer", []);

  let fastcall_tokstrings_size = tokstrings_size.add(tok_fastcall * 4);
  Memory.protect(fastcall_tokstrings_size, 4, "rw-");
  fastcall_tokstrings_size.writeU32(8);

  Interceptor.attach(yylex, {
    onLeave: function (retval) {
      let id = retval.readU32();
      if (id != tok_fastcall) {
        return;
      }
      let token = peak_token();
      let token_id = token.readU32();
      if (token_id != tok_int) {
        retval.add(12).writeU32(0);
        return;
      }
      let value = token.add(16).readU32();
      if (value != 255 && value != 254) {
        retval.add(12).writeU32(0);
        return;
      }
      get_token();
      let regs_data = Memory.alloc(0x20);
      let regs_size_ptr = regs_data.add(0x4);
      let regs_ptr = regs_data.add(0x8);
      global.cc_data.push(regs_data);

      regs_data.writeU32(value == 255 ? 0 : 1);

      var regs_size = 0;
      while (true) {
        let token = peak_token();
        let token_id = token.readU32();
        if (token_id != tok_int) {
          break;
        }
        let value = token.add(16).readU32();
        regs_ptr.add(regs_size * 4).writeU32(REGS_LOOKUP[value]);
        regs_size++;
        get_token();
        if (regs_size >= 6) {
          break;
        }
      }
      regs_size_ptr.writeU32(regs_size);
      retval.add(12).writePointer(regs_data);
    },
  });
}

function handle_c1xx(base) {
  Module.ensureInitialized("c1xx.dll");

  let TOKEN_INPUT_STACK = base.add(0x00240a58);
  let TOKEN_INPUT_STACK_PEAK_TOKEN = base.add(0x00075fd0);
  let TOKEN_INPUT_STACK_GET_TOKEN = base.add(0x000578c0);
  let YYVAL = base.add(0x00224d40);
  let LOWRITE = base.add(0x000a7080);
  let YYLEX = base.add(0x00056f10);
  let TOKSTRINGS_SIZE = base.add(0x001c9948);
  let PARSER_OPTYPE_START = base.add(0x0004f4b2);
  let PARSER_OPTYPE_END = base.add(0x0004f4b9);
  let ADD_FUNC_START = base.add(0x0007ff7f);
  let ADD_FUNC_END = base.add(0x0007febe);
  let TOK_FASTCALL = 225;
  let TOK_INT = 33;
  let SAVE_EXTRA_START = base.add(0x0005da9b);
  let SAVE_EXTRA_END = base.add(0x0005daa1);
  let WRITE_EXTRA_START1 = base.add(0x0005e39a);
  let WRITE_EXTRA_START2 = base.add(0x0005fd87);
  let WRITE_EXTRA_START3 = base.add(0x0005ffed);
  let WRITE_EXTRA_START4 = base.add(0x000601ef);
  let WRITE_EXTRA_END = base.add(0x0005dbbf);
  let ADD_FUNC2_START = base.add(0x0004fa04);
  let ADD_FUNC2_END = base.add(0x0004e87a);
  let VAARGS_START = base.add(0x00004136);
  let VAARGS_GOOD_END = base.add(0x0000411b);
  let VAARGS_BAD_END = base.add(0x000d31d2);
  let VAARGS_UGLY_END = base.add(0x000d31b1);
  let VAARGS2_START = base.add(0x000db7f8);
  let VAARGS2_GOOD_END = base.add(0x00033f27);
  let VAARGS2_BAD_END = base.add(0x00034192);
  let VAARGS2_UGLY_END = base.add(0x000db802);
  let PREP_START = base.add(0x0000f495);
  let PREP_END = base.add(0x0000f49a);
  let INSTALL_DEFINE = base.add(0x0007d7d0);
  let COMMAND_DEF = base.add(0x0000f890);

  global.USERCALL_C1XX_MODULE ??= new CModule(
    `asm("
          .global peak_token
          peak_token:
          mov TOKEN_INPUT_STACK, %ecx
          call TOKEN_INPUT_STACK_PEAK_TOKEN
          ret
          .global get_token
          get_token:
          mov TOKEN_INPUT_STACK, %ecx
          call TOKEN_INPUT_STACK_GET_TOKEN
          ret
          .global parser_optype
          parser_optype:
          cmp $2, %ax
          je PARSER_OPTYPE_END
          movl $0, 0x34(%ebx)
          jmp PARSER_OPTYPE_END
          .global add_func
          add_func:
          cmp $2, %ax
          jne ADD_FUNC_END
          mov 0x10(%edi), %eax
          mov %eax, 0xC(%esi)
          jmp ADD_FUNC_END
          .global add_func2
          add_func2:
          cmp $2, %ax
          jne ADD_FUNC2_END
          mov 0x10(%esi), %eax
          mov %eax, 0xC(%edi)
          jmp ADD_FUNC2_END
          .global save_extra
          save_extra:
          movzbl 2(%eax), %edx
          and $7, %edx
          cmp $2, %edx
          jne skip_save_extra
          mov 0xC(%eax), %edx
          mov %edx, 0x118(%esp) // sync stack offset
          skip_save_extra:
          movzbl 2(%eax), %edx
          mov (%edi), %al
          jmp SAVE_EXTRA_END
          .global write_extra
          write_extra:
          mov 0x10(%esp), %esi
          and $0x1C, %esi
          cmp $4, %esi
          jne skip
          mov %edi, %esi
          mov 0x118(%esp), %ebx
          call LOWRITE
          skip:
          mov 0x18(%esp), %ebx
          jmp WRITE_EXTRA_END
          .global vaargs
          vaargs:
          mov %eax, %edx
          mov %ebx, %eax
          and $7, %eax
          cmp $1, %ax
          jz VAARGS_GOOD_END
          cmp $3, %ax
          jz VAARGS_BAD_END
          cmp $2, %ax
          jne VAARGS_UGLY_END
          mov 0xC(%edx), %edx
          test %edx, %edx
          jz VAARGS_BAD_END
          mov (%edx), %edx
          test $1, %edx
          jz VAARGS_BAD_END
          jmp VAARGS_GOOD_END
          .global vaargs2
          vaargs2:
          cmp $2, %di
          jne VAARGS2_UGLY_END
          mov 0xC(%esi), %eax
          test %eax, %eax
          jz VAARGS2_BAD_END
          mov (%eax), %eax
          test $1, %eax
          jz VAARGS2_BAD_END
          jmp VAARGS2_GOOD_END
          pd0:
          .asciz \\"__eax=0\\"
          pd1:
          .asciz \\"__ebx=1\\"
          pd2:
          .asciz \\"__ecx=2\\"
          pd3:
          .asciz \\"__edx=3\\"
          pd4:
          .asciz \\"__esi=4\\"
          pd5:
          .asciz \\"__edi=5\\"
          pd6:
          .asciz \\"__usercall=__fastcall 255\\"
          pd7:
          .asciz \\"__userpurge=__fastcall 254\\"
          defines:
          .long pd0
          .long pd1
          .long pd2
          .long pd3
          .long pd4
          .long pd5
          .long pd6
          .long pd7
          .long 0
          .global prep
          prep:
          call INSTALL_DEFINE
          mov $defines, %edi
          prep_loop:
          mov (%edi), %eax
          test %eax, %eax
          jz PREP_END
          call COMMAND_DEF
          add $4, %edi
          jmp prep_loop
      ");`,
    {
      TOKEN_INPUT_STACK: TOKEN_INPUT_STACK,
      TOKEN_INPUT_STACK_PEAK_TOKEN: TOKEN_INPUT_STACK_PEAK_TOKEN,
      TOKEN_INPUT_STACK_GET_TOKEN: TOKEN_INPUT_STACK_GET_TOKEN,
      PARSER_OPTYPE_END: PARSER_OPTYPE_END,
      YYVAL: YYVAL,
      WRITE_EXTRA_END: WRITE_EXTRA_END,
      LOWRITE: LOWRITE,
      ADD_FUNC_END: ADD_FUNC_END,
      SAVE_EXTRA_END: SAVE_EXTRA_END,
      ADD_FUNC2_END: ADD_FUNC2_END,
      VAARGS_GOOD_END: VAARGS_GOOD_END,
      VAARGS_BAD_END: VAARGS_BAD_END,
      VAARGS_UGLY_END: VAARGS_UGLY_END,
      VAARGS2_GOOD_END: VAARGS2_GOOD_END,
      VAARGS2_BAD_END: VAARGS2_BAD_END,
      VAARGS2_UGLY_END: VAARGS2_UGLY_END,
      PREP_END: PREP_END,
      INSTALL_DEFINE: INSTALL_DEFINE,
      COMMAND_DEF: COMMAND_DEF,
    }
  );

  patch_jumps([
    [SAVE_EXTRA_START, global.USERCALL_C1XX_MODULE.save_extra],
    [PARSER_OPTYPE_START, global.USERCALL_C1XX_MODULE.parser_optype],
    [WRITE_EXTRA_START1, global.USERCALL_C1XX_MODULE.write_extra],
    [WRITE_EXTRA_START2, global.USERCALL_C1XX_MODULE.write_extra],
    [WRITE_EXTRA_START3, global.USERCALL_C1XX_MODULE.write_extra],
    [WRITE_EXTRA_START4, global.USERCALL_C1XX_MODULE.write_extra],
    [ADD_FUNC_START, global.USERCALL_C1XX_MODULE.add_func],
    [ADD_FUNC2_START, global.USERCALL_C1XX_MODULE.add_func2],
    [VAARGS_START, global.USERCALL_C1XX_MODULE.vaargs],
    [VAARGS2_START, global.USERCALL_C1XX_MODULE.vaargs2],
    [PREP_START, global.USERCALL_C1XX_MODULE.prep],
  ]);

  setup_usercall_parser(
    TOK_FASTCALL,
    TOK_INT,
    TOKSTRINGS_SIZE,
    YYLEX,
    global.USERCALL_C1XX_MODULE
  );
}

function handle_c2(base) {
  Module.ensureInitialized("c2.dll");

  let START_PTR = base.add(0x001513b1);
  let END_PTR = base.add(0x001513c7);
  let READ_EXTRA_START_PTR = base.add(0x000b829c);
  let READ_EXTRA_END = base.add(0x000b82a3);
  let LOREAD = base.add(0x00003350);
  let LONG_TYPE_INDEX = base.add(0x00204ffc);
  let FASTCALL_REGS = base.add(0x001db930);
  let CALLEE_CLEAN_START = base.add(0x0014e81c);
  let CALLEE_CLEAN_END = base.add(0x0014e823);

  // Put this after handle_usercall to write to the spoils list of the fn
  // Will be overwritten by the shrink wrap optimization
  //   mov 0x18(%esp), %edx
  //   movl $-1, 0x80(%edx)

  global.USERCALL_C2_MODULE ??= new CModule(
    `asm("
          .global usercall_allo_reg
          usercall_allo_reg:
          mov 0x18(%esp), %ecx
          test %ecx, %ecx
          jz fn_zero
          mov (%ecx), %ecx
          jmp do_stuff
          fn_zero:
          mov 0x24(%esp), %ecx
          mov 0x28(%ecx), %ecx
          mov 0x18(%ecx), %ecx
          do_stuff:
          mov 0x10(%ecx), %eax
          test %eax, %eax
          jne handle_usercall
          mov FASTCALL_REGS, %edx
          mov $2, %edi
          jmp END_PTR
          handle_usercall:
          lea 0x8(%eax), %edx
          mov 0x4(%eax), %edi
          jmp END_PTR
          .global read_extra
          read_extra:
          mov 0x20(%esi), %eax
          and $0x1C, %eax
          cmp $4, %eax
          jne skip
          call LOREAD
          mov %eax, 0x10(%esi)
          skip:
          mov LONG_TYPE_INDEX, %eax
          cmpl $0x0, (%eax)
          jmp READ_EXTRA_END
          .global callee_clean
          callee_clean:
          mov 0x20(%eax), %edi
          and $0x1C, %edi
          cmp $4, %edi
          jne callee_clean_skip
          mov 0x10(%eax), %edi
          test %edi, %edi
          jz callee_clean_skip
          mov (%edi), %edi
          test $1, %edi
          jz callee_clean_skip
          mov $0, %edi
          jmp CALLEE_CLEAN_END
          callee_clean_skip:
          mov 0x44(%eax), %edi
          jmp CALLEE_CLEAN_END
      ");`,
    {
      END_PTR: END_PTR,
      READ_EXTRA_END: READ_EXTRA_END,
      LOREAD: LOREAD,
      LONG_TYPE_INDEX: LONG_TYPE_INDEX,
      FASTCALL_REGS: FASTCALL_REGS,
      CALLEE_CLEAN_END: CALLEE_CLEAN_END,
    }
  );

  patch_jumps([
    [START_PTR, global.USERCALL_C2_MODULE.usercall_allo_reg],
    [READ_EXTRA_START_PTR, global.USERCALL_C2_MODULE.read_extra],
    [CALLEE_CLEAN_START, global.USERCALL_C2_MODULE.callee_clean],
  ]);
}

function main() {
  global.cc_data = [];

  let LoadLibraryW = Module.findExportByName("Kernel32.dll", "LoadLibraryW");

  Interceptor.attach(LoadLibraryW, {
    onEnter: function (args) {
      this.dllName = Memory.readUtf16String(args[0]);
    },
    onLeave: function (retval) {
      if (retval.isNull()) {
        return;
      }

      if (this.dllName.endsWith("\\c1xx.dll")) {
        check_checksum("c1xx.dll", retval, 0x00232f62);
        handle_c1xx(retval);
      } else if (this.dllName.endsWith("\\c2.dll")) {
        check_checksum("c2.dll", retval, 0x0022735a);
        handle_c2(retval);
      }
    },
  });
}

setImmediate(main);
