# Clang for the PS2

## But why?

The [toolchain](https://github.com/ps2dev/ps2toolchain) is horrifically outdated, using GCC 3.2.3 and an outdated binutils. A more recent toolchain would better optimise code (squeezing more out of the somewhat anaemic hardware), support more modern languages and provide an easier development experience, potentially reinvigorating the homebrew scene.

Others have attempted replacement toolchains, most notably [uyjulian's efforts](https://github.com/uyjulian/ps2toolchain/tree/uyjworking), but I think reinventing the wheel is a better solution than updating a 20-year-old patchset that can't be upstreamed due to not knowing copyright owners.

## But why Clang?

Actually, Clang is only 20% of the reason for this project. The main reason is that by bringing up LLVM support, any language implementation that can use LLVM as a backend can theoretically target the PS2. That opens up a much larger audience than pure C which the old toolchain's version of GCC uses.

## How can I help?

The biggest obstacle is motivation, so even just filing an issue telling me about what you would do (want to play a Rust-based emulator on your PS2?) would help me greatly.
