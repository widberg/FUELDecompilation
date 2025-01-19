// This is not a real SecuRom header

#define SECUROM_INSERT_JUNK(x, y)             \
    __asm {_emit 0xEB} /*jmp $+0x10*/         \
    __asm {_emit 0x0E}                        \
    __asm {_emit 0x4D} /*dec ebp*/            \
    __asm {_emit 0x61} /*popa*/               \
    __asm {_emit 0x30} /*xor [edi+79h], dl*/  \
    __asm {_emit 0x57}                        \
    __asm {_emit 0x79}                        \
    __asm {_emit 0x47} /*inc edi*/            \
    __asm {_emit 0x31} /*xor [ebx+6Dh], ebp*/ \
    __asm {_emit 0x6B}                        \
    __asm {_emit 0x6D}                        \
    __asm {_emit x}    /*db x*/               \
    __asm {_emit y}    /*db y*/               \
    __asm {_emit 0x00} /*db 0*/               \
    __asm {_emit 0x00} /*db 0*/               \
    __asm {_emit 0x00} /*db 0*/
#define SECUROM_INSERT_JUNK_PROLOGUE(y) INSERT_JUNK(0x21, y)
#define SECUROM_INSERT_JUNK_EPILOGUE(y) INSERT_JUNK(0x22, y)
