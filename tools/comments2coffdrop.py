#!/usr/bin/env python3

import argparse
import struct

OBJ_MAGIC = 0x14C
MSIL_MAGIC = b"\x00\x00\xFF\xFF\x01\x00\x4C\x01"
LIB_MAGIC = b"!<arch>\n"


def process_obj(f, start=0, size=None):
    f.seek(start + 8)
    pointer_to_symbol_table = struct.unpack("<I", f.read(4))[0]
    num_symbols = struct.unpack("<I", f.read(4))[0]
    f.seek(start + pointer_to_symbol_table)
    symbol_table_size = num_symbols * 18
    f.seek(start + pointer_to_symbol_table + symbol_table_size)
    string_table_size = struct.unpack("<I", f.read(4))[0]
    f.seek(start + pointer_to_symbol_table + symbol_table_size + string_table_size)
    if size is None:
        comments_data = f.read()
    else:
        pos = f.tell()
        comments_data = f.read(size - pos + start)
    return comments_data.decode("utf-8").split("\x00")[:-1]


def process_msil(f, start=0, size=None):
    f.seek(start + 34)
    num_sections = struct.unpack("<H", f.read(2))[0]
    f.seek(start + 52)
    cil_gl = None
    for _ in range(num_sections):
        section_header = f.read(40)
        if section_header[:7] == b".cil$gl":
            cil_gl = struct.unpack("<I", section_header[20:24])[0] + 32
            break
    if cil_gl is None:
        return []
    f.seek(start + cil_gl + 21)
    trailer = struct.unpack("<I", f.read(4))[0]
    f.seek(trailer - 25, 1)
    flags = f.read(2)
    assert flags[0] == 0x0A
    if flags[1] == 0x80:
        f.seek(4, 1)
        b = f.read(1)
        while b != b"\x00":
            b = f.read(1)
        f.seek(8, 1)
    f.seek(1, 1)
    num_options = struct.unpack("<B", f.read(1))[0]
    if num_options >= 0x80:
        num_options = struct.unpack("<I", f.read(4))[0]
    comments = []
    for _ in range(num_options):
        type = struct.unpack("<B", f.read(1))[0]
        value = b""
        b = f.read(1)
        while b != b"\x00":
            value += b
            b = f.read(1)
        if type == 6:
            comments.append(value.decode("utf-8"))
    if size != None:
        f.seek(start + size)
    return comments


def process_lib(f):
    comments = []
    while True:
        header = f.read(60)
        if len(header) < 60:
            break
        size = int(header[48:58].decode("utf-8").strip())
        padding = size % 2
        start = f.tell()
        magic = struct.unpack("<H", f.read(2))[0]
        if magic == OBJ_MAGIC:
            comments += process_obj(f, start, size)
            f.seek(padding, 1)
        else:
            f.seek(start)
            magic = f.read(8)
            if magic == MSIL_MAGIC:
                comments += process_msil(f, start, size)
                f.seek(padding, 1)
            else:
                f.seek(start + size + padding)
    return comments


def process_file(f):
    magic = struct.unpack("<H", f.read(2))[0]
    if magic == OBJ_MAGIC:
        return process_obj(f)
    f.seek(0)
    magic = f.read(8)
    if magic == MSIL_MAGIC:
        return process_msil(f)
    if magic == LIB_MAGIC:
        return process_lib(f)
    print("Unknown file type.")
    exit(1)


def fatal_error(file, line, message):
    print(f"FATAL: {file}:{line} : {message}")
    return 1


def check_argument_count(tag, file, line, comment, parts, count):
    if len(parts) != count:
        fatal_error(
            file,
            line,
            f'Invalid {tag} comment: "{comment}". Expected {count} arguments, got {len(parts)}.',
        )
        return 1
    return 0


def rename_symbol(symbols, address, dname, file, line):
    error_count = 0
    if address in symbols:
        if symbols[address][1] is not None and symbols[address][1] != dname:
            error_count += fatal_error(
                file,
                line,
                "Symbol address collision: address: 0x%08X, old: %s, new: %s"
                % (address, symbols[address][1], dname),
            )
        symbols[address][1] = dname
    else:
        symbols[address] = [False, dname]
    return error_count


def undef_symbol(symbols, address):
    if address in symbols:
        symbols[address][0] = True
    else:
        symbols[address] = [True, None]
    return 0


def main():
    parser = argparse.ArgumentParser(
        description="Generate list of defined symbols in libraries and objects."
    )
    parser.add_argument("out", type=argparse.FileType("a+b"))
    parser.add_argument("objs", type=str, nargs="+")
    args = parser.parse_args()

    # Read comments from all objects
    comments = []
    for obj in args.objs:
        with open(obj, "rb") as f:
            comments += process_file(f)

    comments = set(comments)

    # Parse comments
    symbols = {}
    error_count = 0

    for comment in comments:
        parts = comment.split(";")
        if len(parts) > 0:
            tag = parts[0]
            file = parts[1]
            line = parts[2]
            parts = parts[3:]
            if tag == "delinkfunction":
                error_count += check_argument_count(tag, file, line, comment, parts, 4)
                undname = parts[0]  # to check template parameters
                dname = parts[1]
                address = int(parts[2], 16)
                if parts[3] != "":
                    error_count += fatal_error(
                        file, line, "Template parameters are not supported yet."
                    )
                template_params = parts[3].split(", ")
                error_count += rename_symbol(symbols, address, dname, file, line)
                undef_symbol(symbols, address)
            elif tag == "addresssymbol":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                address = int(parts[0], 16)
                dname = parts[1]
                error_count += rename_symbol(symbols, address, dname, file, line)
            elif tag == "symbolsymbol":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                old = parts[0]
                new = parts[1]
                error_count += rename_symbol(symbols, old, new, file, line)
            elif tag == "addressvftable":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                address = int(parts[0], 16)
                klass = parts[1]
                dname = f"??_7{klass}@@6B@"
                error_count += rename_symbol(symbols, address, dname, file, line)
            elif tag == "addressvf":
                error_count += check_argument_count(tag, file, line, comment, parts, 3)
                address = int(parts[0], 16)
                klass = parts[1]
                function = parts[2]
                dname = f"?{function}@{klass}@@UAEXXZ"
                error_count += rename_symbol(symbols, address, dname, file, line)
            elif tag == "undefaddress":
                error_count += check_argument_count(tag, file, line, comment, parts, 1)
                address = int(parts[0], 16)
                undef_symbol(symbols, address)
            else:
                error_count += fatal_error(file, line, f'Unknown tag: "{tag}"')

    if error_count > 0:
        print(f"{error_count} errors found.")
        exit(1)

    args.out.seek(0)
    out_contents = args.out.read()

    out_result = b""
    reserved_size = 0

    for address, (undef, dname) in sorted(
        symbols.items(), key=lambda x: (isinstance(x[0], str), x[0])
    ):
        flags = (1 if undef else 0) | (2 if dname is not None else 0)
        old_symbol = address if isinstance(address, str) else f"__0x{address:08X}"
        out_result += flags.to_bytes(1, "little")
        out_result += old_symbol.encode("latin-1") + b"\x00"
        if dname is not None:
            new_symbol = dname.encode("latin-1") + b"\x00"
            new_symbol_size = len(new_symbol)
            if new_symbol_size > 8:
                reserved_size += new_symbol_size
            out_result += new_symbol

    if out_contents != out_result:
        args.out.truncate(0)
        args.out.write(reserved_size.to_bytes(4, "little"))
        args.out.write(out_result)
        args.out.write((0).to_bytes(1, "little"))


if __name__ == "__main__":
    main()
