# FUEL Decompilation

[![Join the chat at https://discord.gg/CQgMNbYeUR](https://img.shields.io/badge/chat-on_discord-7389D8.svg?logo=discord&logoColor=ffffff&labelColor=6A7EC2)](https://discord.gg/CQgMNbYeUR)

This is a decompilation of the game FUEL (PC, US Retail), which was released in 2009 by Asobo Studio and published by Codemasters. The game was developed using the Zouna Game Engine, which is a proprietary engine with a long and storied history. Neither the game nor its assets are included in this repository. A legally obtained copy of the game is required to build and run the decompiled code.

## Getting Started

### Prerequisites

#### Required

* Git
* CMake
* Ninja
* Python 3
* [msvc8.0](https://github.com/widberg/msvc8.0)
* [Microsoft DirectX SDK (August 2008)](https://archive.org/details/dxsdk_aug08)
* Ghidra >= 11.1.1
* [ghidra-delinker-extension](https://github.com/boricj/ghidra-delinker-extension)
* FUEL (PC, US Retail)

#### Optional

* x64dbg (x32dbg)

### Checkout

```sh
git clone https://github.com/widberg/FUELDecompilation.git
```

### Ghidra Project

A Ghidra server with the FUEL project is available at `cs.widberg.me:13100` with anonymous read-only access enabled. If you would like an account with write access, please ask in the [Discord](https://discord.gg/CQgMNbYeUR). I recommend creating a `zouna` directory in the repository and saving your local copy of the Ghidra project there. If you choose to save it somewhere else, you can edit the CMake configuration to point to the correct location.

### Build

All commands should be run from the `Visual Studio 2005 Command Prompt`, which can be launched by running `msvc8.0/bin/vcvars32.bat` from `cmd.exe`. The CMake project can be configured with several key options:

* `FUEL_INSTALL_DIR` - The path to the FUEL installation directory. Defaults to the environment variable of the same name.
* `DXSDK_DIR` - The path to the Microsoft DirectX SDK (August 2008) installation directory. Defaults to the environment variable of the same name.
* `X64DBG_INSTALL_DIR` - The path to the x64dbg installation directory (Optional). Defaults to the environment variable of the same name.
* `FUEL_ARGS` - The command line arguments to pass to the game when running it from the `run` and `debug` targets. Defaults to `-W`.
* `GHIDRA_LOCAL_PROJECT_DIR` - The path to the local Ghidra project directory. Defaults to `zouna` in the repository root.

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
