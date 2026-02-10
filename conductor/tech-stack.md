# Technology Stack

## 1. Core Development
-   **Programming Language:** C (Standard: C11)
    -   Flags: `-O2 -g3 -Wall -Wextra -fno-stack-protector -ffreestanding -nostdlib`
-   **Compiler:** Clang
    -   Target: `riscv32-unknown-elf`

## 2. Infrastructure & Runtime
-   **Architecture:** RISC-V 32-bit (`riscv32`)
-   **Emulator:** QEMU (`qemu-system-riscv32`)
    -   Machine: `virt`
    -   Bios: `default`

## 3. Build & Tools
-   **Build System:** Shell Script (`run.sh`)
-   **Linker Script:** `kernel.ld`
