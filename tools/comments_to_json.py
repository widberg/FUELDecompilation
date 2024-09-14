#!/usr/bin/env python3

import argparse
import json
import struct

OBJ_MAGIC = 0x14C
LIB_MAGIC = b"!<arch>\n"


def process_obj(obj, start=0, size=None):
    obj.seek(start + 8)
    pointer_to_symbol_table = struct.unpack("<I", obj.read(4))[0]
    num_symbols = struct.unpack("<I", obj.read(4))[0]
    obj.seek(start + pointer_to_symbol_table)
    symbol_table_size = num_symbols * 18
    obj.seek(start + pointer_to_symbol_table + symbol_table_size)
    string_table_size = struct.unpack("<I", obj.read(4))[0]
    obj.seek(start + pointer_to_symbol_table + symbol_table_size + string_table_size)
    if size is None:
        comments_data = obj.read()
    else:
        pos = obj.tell()
        comments_data = obj.read(size - pos + start)
    return comments_data.decode("utf-8").split("\x00")[:-1]


def process_lib(lib):
    comments = []
    while True:
        header = lib.read(60)
        if len(header) < 60:
            break
        size = int(header[48:58].decode("utf-8").strip())
        padding = size % 2
        start = lib.tell()
        magic = struct.unpack("<H", lib.read(2))[0]
        if magic == OBJ_MAGIC:
            comments += process_obj(lib, start, size)
            lib.seek(padding, 1)
        else:
            lib.seek(start + size + padding)
    return comments


def process_file(file):
    magic = struct.unpack("<H", file.read(2))[0]
    if magic == OBJ_MAGIC:
        return process_obj(file)
    file.seek(0)
    magic = file.read(8)
    if magic == LIB_MAGIC:
        return process_lib(file)
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
            undname = parts[1] # to check template parameters
            dname = parts[2]
            address = parts[3]
            template_params = parts[4].split(", ")
            if tag == "delink":
                if template_params != ['']:
                    print("Template parameters are not supported yet.")
                    exit(1)
                if address in symbols:
                    if symbols[address] != dname:
                        print("Symbol address collision:", address, symbols[address], dname)
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
