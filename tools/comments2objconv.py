#!/usr/bin/env python3

import argparse
import struct
import re

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


def msvc_demangle(symbol):
    conventions = {
        "__cdecl": r"^\?[\w@]+@@YA[X0-9]",
        "__stdcall": r"^\?[\w@]+@@YG[X0-9]",
        "__fastcall": r"^\?[\w@]+@@YI[X0-9]",
        "__thiscall": r"^\?[\w@]+@@Q[A-Z0-9]",
        "__vectorcall": r"^\?[\w@]+@@YH[X0-9]",
        "__clrcall": r"^\?[\w@]+@@YZ[X0-9]",
    }

    cc = None
    for convention, pattern in conventions.items():
        if re.match(pattern, symbol):
            cc = convention

    member_function_pattern = re.compile(r"\?\w+@.+@@")
    this_in_ecx = re.match(member_function_pattern, symbol) and cc in [
        "__thiscall",
        "__fastcall",
    ]
    return cc, this_in_ecx


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


def main():
    parser = argparse.ArgumentParser(
        description="Generate list of defined symbols in libraries and objects."
    )
    parser.add_argument("objs", type=str, nargs="+")
    parser.add_argument("--undef", type=argparse.FileType("a+"), required=True)
    parser.add_argument("--rename", type=argparse.FileType("a+"), required=True)
    args = parser.parse_args()

    # Read comments from all objects
    comments = []
    for obj in args.objs:
        with open(obj, "rb") as f:
            comments += process_file(f)

    comments = set(comments)

    # Parse comments
    undef = set()
    rename = {}
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
                if address in rename:
                    if rename[address] != dname:
                        error_count += fatal_error(
                            file,
                            line,
                            "Symbol address collision: address: 0x%08X, old: %s, new: %s"
                            % (address, rename[address], dname),
                        )
                else:
                    undef.add(address)
                    rename[address] = dname
            elif tag == "addresssymbol":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                address = int(parts[0], 16)
                dname = parts[1]
                rename[address] = dname
            elif tag == "symbolsymbol":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                old = parts[0]
                new = parts[1]
                rename[old] = new
            elif tag == "addressvftable":
                error_count += check_argument_count(tag, file, line, comment, parts, 2)
                address = int(parts[0], 16)
                klass = parts[1]
                rename[address] = f"??_7{klass}@@6B@"
            elif tag == "addressvf":
                error_count += check_argument_count(tag, file, line, comment, parts, 3)
                address = int(parts[0], 16)
                klass = parts[1]
                function = parts[2]
                rename[address] = f"?{function}@{klass}@@UAEXXZ"
            elif tag == "undefaddress":
                error_count += check_argument_count(tag, file, line, comment, parts, 1)
                address = int(parts[0], 16)
                undef.add(address)
            else:
                error_count += fatal_error(file, line, f'Unknown tag: "{tag}"')

    if error_count > 0:
        print(f"{error_count} errors found.")
        exit(1)

    # Handle undefs
    args.undef.seek(0)
    undef_contents = args.undef.read()

    undef_result = ""

    for address in sorted(undef, key=lambda x: (isinstance(x, str), x)):
        old_symbol = address if isinstance(address, str) else f"__0x{address:08X}"
        undef_result += f"-ne:{old_symbol}\n"

    if undef_contents != undef_result:
        args.undef.truncate(0)
        args.undef.write(undef_result)

    # Handle renames
    args.rename.seek(0)
    rename_contents = args.rename.read()

    rename_result = ""

    for address, dname in sorted(rename.items(), key=lambda x: (isinstance(x[0], str), x[0])):
        old_symbol = address if isinstance(address, str) else f"__0x{address:08X}"
        rename_result += f"-nr:{old_symbol}:{dname}\n"

    if rename_contents != rename_result:
        args.rename.truncate(0)
        args.rename.write(rename_result)


if __name__ == "__main__":
    main()
