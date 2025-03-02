# FUEL Decompilation

[![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/widberg/FUELDecompilation/build.yml)](https://github.com/widberg/FUELDecompilation/actions)
[![Join the chat at https://discord.gg/CQgMNbYeUR](https://img.shields.io/badge/chat-on_discord-7389D8.svg?logo=discord&logoColor=ffffff&labelColor=6A7EC2)](https://discord.gg/CQgMNbYeUR)

This is a decompilation of the game FUEL (PC, US Retail), which was released in 2009 by Asobo Studio and published by Codemasters. The game was developed using the Zouna Game Engine, which is a proprietary engine with a long and storied history. Neither the game executable nor its assets are included in this repository. A legally obtained copy of the game is required to build and run the decompiled code. A lot of the theory and techniques used in this project are outlined in the [Decompilation page of the FMTK Wiki](https://github.com/widberg/fmtk/wiki/Decompilation).

## Getting Started

### Prerequisites

#### Required

* [Git](https://git-scm.com/)
* [CMake](https://cmake.org/)
* [Ninja](https://github.com/ninja-build/ninja)
* [Python 3](https://www.python.org/downloads/)
* [msvc8.0p](https://github.com/widberg/msvc8.0/tree/msvc8.0p) (the patched version of the compiler)
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

* [boricj](https://github.com/boricj) and his amazing [ghidra-delinker-extension](https://github.com/boricj/ghidra-delinker-extension) without which the black magic surrounding `libfuel.obj` would not have been possible. He also provided insightful input on the design of `coffdrop`, speeding the build up immensely.
