#!/usr/bin/env python3

import argparse
import json
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


def main():
    parser = argparse.ArgumentParser(
        description="Generate list of defined symbols in libraries and objects."
    )
    parser.add_argument("objs", type=str, nargs="+")
    parser.add_argument("--output", type=argparse.FileType("a+"), required=True)

    args = parser.parse_args()

    comments = []
    for obj in args.objs:
        with open(obj, "rb") as f:
            comments += process_file(f)

    symbols = {}

    for comment in comments:
        parts = comment.split(";")
        if len(parts) == 5:
            tag = parts[0]
            undname = parts[1]  # to check template parameters
            dname = parts[2]
            address = parts[3]
            template_params = parts[4].split(", ")
            if tag == "delink":
                if template_params != [""]:
                    print("Template parameters are not supported yet.")
                    exit(1)
                if address in symbols:
                    if symbols[address] != dname:
                        print(
                            "Symbol address collision:",
                            address,
                            symbols[address],
                            dname,
                        )
                        exit(1)
                else:
                    symbols[address] = dname
            else:
                print("Unknown tag:", tag)
                exit(1)

    args.output.seek(0)
    try:
        contents = json.load(args.output)
    except json.decoder.JSONDecodeError:
        contents = None

    result = []

    for address, dname in sorted(symbols.items()):
        result.append(
            {
                "action": "exclude",
                "type": "symbol",
                "name": dname,
                "address": address,
            }
        )

    if contents != result:
        args.output.truncate(0)
        json.dump(result, args.output, indent=4)


if __name__ == "__main__":
    main()
