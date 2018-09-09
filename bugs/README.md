# Bugs found while porting Clang:

## Found while building newlib:
### `llvm-integer-bug`, `llvm-unsupported-softenfloatres-opcode-assert`, `llvm-not-natively-supported-assert`
These are all caused by the MIPS N64 ABI requiring 128-bit `long double`, which isn't implemented in the MIPS backend for single float, resulting in multiple issues where the compiler tries to fit 128 bits in two 32-bit registers. The workaround is to break the N64 ABI for the PS2 and use 64-bit `long double`, which is what FreeBSD does.

### `llvm-not-natively-supported-assert`
The MIPS optimiser contains a pass which tries to convert a `float` to `long long` conversion into a MIPS `trunc.l.s` instruction, which isn't implemented in the PS2 because a `long long` won't fit in the 32-bit `float` registers. The solution is to disable this optimisation by returning a dummy `SDValue`. LLVM then does the conversion work itself.

### `llvm-segfault`
This doesn't currently have a fix, but the bug is that LLVM wants to produce a `cvt.s.l`, which requires a 64-bit FPU register which the PS2 doesn't have, and then crashes because you can't register allocate over zero available registers.
