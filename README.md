# FUEL Decompilation

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/widberg/FUELDecompilation/build.yml)](https://github.com/widberg/FUELDecompilation/actions)
[![Join the chat at https://discord.gg/CQgMNbYeUR](https://img.shields.io/badge/chat-on_discord-7389D8.svg?logo=discord&logoColor=ffffff&labelColor=6A7EC2)](https://discord.gg/CQgMNbYeUR)

This is a decompilation of the game FUEL (PC, US Retail), which was released in 2009 by Asobo Studio and published by Codemasters. The game was developed using the Zouna Game Engine, which is a proprietary engine with a long and storied history. Neither the game executable nor its assets are included in this repository. A legally obtained copy of the game is required to build and run the decompiled code.

## Getting Started

### Prerequisites

#### Required

* [Git](https://git-scm.com/)
* [CMake](https://cmake.org/)
* [Ninja](https://github.com/ninja-build/ninja)
* [Python 3](https://www.python.org/downloads/)
* [msvc8.0](https://github.com/widberg/msvc8.0)
* [Microsoft DirectX SDK (August 2008)](https://archive.org/details/dxsdk_aug08)
* FUEL (PC, US Retail) - FUEL.exe SHA-256: `ac1b2077137b7c6299c344111857b032635fe3d4794bc5135dad7c35feeda856`

#### Optional

* [x64dbg (x32dbg)](https://github.com/x64dbg/x64dbg)

### Checkout

```sh
git clone https://github.com/widberg/FUELDecompilation.git
```

### Ghidra Project

A [Ghidra](https://ghidra-sre.org/) server with the FUEL project is available at `cs.widberg.me:13100` with anonymous read-only access enabled. If you would like an account with write access, please ask in the [Discord](https://discord.gg/CQgMNbYeUR).

### Build

All commands should be run from the `Visual Studio 2005 Command Prompt`, which can be launched by running `msvc8.0/bin/vcvars32.bat` from `cmd.exe`. The CMake project can be configured with several key options:

* `FUEL_INSTALL_DIR` - The path to the FUEL installation directory. Defaults to the environment variable of the same name.
* `DXSDK_DIR` - The path to the Microsoft DirectX SDK (August 2008) installation directory. Defaults to the environment variable of the same name.
* `X64DBG_INSTALL_DIR` - The path to the x64dbg installation directory (Optional). Defaults to the environment variable of the same name.
* `FUEL_ARGS` - The command line arguments to pass to the game when running it from the `run` and `debug` targets. Defaults to `-W`.

See the CMakeLists.txt file for more options.

An example configuration and build is shown below:

```sh
cmake -B build -G Ninja -DFUEL_INSTALL_DIR="C:\Program Files (x86)\Steam\steamapps\common\FUEL" -DDXSDK_DIR="C:\Program Files (x86)\Microsoft DirectX SDK (August 2008)"
cmake --build build
```

The `run` target will launch the built recompilation from the game directory with the options in `FUEL_ARGS`:

```sh
cmake --build build --target run
```

If `X64DBG_INSTALL_DIR` is defined, the `debug` target will launch the built recompilation from the game directory with the options in `FUEL_ARGS` and attach x32dbg:

```sh
cmake --build build --target debug
```

## Acknowledgements

* [boricj](https://github.com/boricj) and his amazing [ghidra-delinker-extension](https://github.com/boricj/ghidra-delinker-extension) without which the black magic surrounding `libfuel.obj` would not have been possible.
* [Agner Fog](https://www.agner.org/) and his incredible [objconv](https://www.agner.org/optimize/#objconv) tool which was used speed up build times dramatically.
* [chemeris](https://github.com/chemeris) and his useful [msinttypes](https://github.com/chemeris/msinttypes) library which was used to provide `stdint.h` and `inttypes.h` compatibility for MSVC 8.0.

## License

The `stdint.h` and `inttypes.h` headers in the `objconv` directory are licensed under the following terms:

```c
//  Copyright (c) 2006-2013 Alexander Chemeris
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
//   1. Redistributions of source code must retain the above copyright notice,
//      this list of conditions and the following disclaimer.
// 
//   2. Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
// 
//   3. Neither the name of the product nor the names of its contributors may
//      be used to endorse or promote products derived from this software
//      without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
// WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
// EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

The remaining files in the `objconv` directory are licensed under the following terms:

Objconv is an open source program published under the conditions of the GNU General
Public License v. 3, as defined in www.gnu.org/licenses/. The program is provided without
any warranty or support.

It may in some cases be illegal to modify, convert or disassemble copyright protected
software files without permission from the copyright owner. It is an open question whether it
is legal to modify or convert a copyright protected function library and use it for other
purposes than presupposed in the license conditions. It is recommended to ask the vendor
for permission before developing and publishing any software that is built with the use of a
converted copyright protected function library.

Copyright law does not generally permit disassembly of copyright protected software for the
purpose of circumventing a copy protection mechanism, for using part of the code in other
contexts, or for extracting the algorithms behind the code.

European, Australian, and US copyright law does, however, under certain conditions permit
reverse engineering of copyright protected software when the purpose is to extract the
information necessary for establishing interoperability with other software, and only to the
extent necessary for this purpose. However, I am not a legal expert. The user should seek
legal advice before deciding whether it is legal to use objconv on copyrighted software for a
specific purpose.
