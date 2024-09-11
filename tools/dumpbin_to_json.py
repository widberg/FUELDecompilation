#!/usr/bin/env python3

import argparse
import subprocess
import sys
import json

def process_output(output):
    symbols = set()
    is_symbols = False
    for line in output.splitlines():
        line = line.strip()
        if line == "COFF SYMBOL TABLE":
            is_symbols = True
            continue
        if is_symbols:
            if line == "":
                is_symbols = False
                continue
            parts = line.split()
            if len(parts) >= 7 and len(parts) <= 8 and parts[2] != "UNDEF" and parts[len(parts) - 3] == "External":
                symbols.add(parts[len(parts) - 1])
    return sorted(list(symbols))

def main():
    parser = argparse.ArgumentParser(description='Generate list of defined symbols in libraries and objects.')
    parser.add_argument('objs', type=str, nargs='+')
    parser.add_argument('--dumpbin', type=str, required=True)
    parser.add_argument('--output', type=argparse.FileType('a+'), required=True)

    args = parser.parse_args()

    cmdline = [args.dumpbin, '/SYMBOLS', *args.objs]
    process = subprocess.run(cmdline, stdout=subprocess.PIPE, text=True)

    if process.returncode != 0:
        sys.exit(1)

    args.output.seek(0)
    contents = json.load(args.output)
    symbols = process_output(process.stdout)
    result = []
    for symbol in symbols:
        result.append({
            "action": "exclude",
            "type": "symbol",
            "name": symbol
        })

    if contents != result:
        args.output.truncate(0)
        json.dump(result, args.output, indent=4)

if __name__ == '__main__':
    main()
