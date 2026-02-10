# Specification: Implement Basic Unikernel Isolation Primitives

## 1. Overview
This track focuses on establishing the core security boundary of "The Hive" architecture: the isolation of "Worker Bee" unikernels from the "Brain" microkernel. We will implement basic memory protection (using RISC-V PMP or Page Tables) and a primitive context-switching mechanism.

## 2. Goals
-   Enable the kernel to load a binary into a restricted memory region.
-   Prevent the loaded binary from accessing kernel memory (Hardware Isolation).
-   Implement a mechanism to trap exceptions from the user-mode binary back to the kernel.

## 3. Requirements
-   **Hardware:** RISC-V 32-bit (QEMU `virt` machine).
-   **Memory Management:** Implement a basic physical memory allocator (bump allocator is sufficient for MVP).
-   **Protection:** Configure Physical Memory Protection (PMP) entries or simple Page Tables to restrict user-mode access.
-   **Context Switch:** Implement `sret` logic to switch from Machine/Supervisor mode to User mode.

## 4. Non-Goals
-   Full virtual memory / paging support (focus on physical isolation first).
-   Complex scheduling (single worker is fine).
-   IPC (Inter-Process Communication) - this will be a separate track.

## 5. Success Criteria
-   Kernel boots and initializes memory protection.
-   Kernel jumps to a dummy "user" payload.
-   User payload attempts to write to kernel memory -> TRAP -> Kernel catches it and prints a success message ("Isolation Verified").
