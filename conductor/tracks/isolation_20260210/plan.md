# Plan: Implement Basic Unikernel Isolation Primitives

## Phase 1: Environment & Memory Basics
- [ ] Task: Set up memory map and stack setup in `kernel.ld` and `run.sh`
- [ ] Task: Implement basic physical memory manager (bump allocator) in `kernel.c`
- [ ] Task: Conductor - User Manual Verification 'Phase 1' (Protocol in workflow.md)

## Phase 2: Hardware Isolation (PMP/Paging)
- [ ] Task: Define PMP (Physical Memory Protection) regions for Kernel (RWX) and User (RWX)
- [ ] Task: Write PMP configuration code in `kernel.c` / `asm`
- [ ] Task: Conductor - User Manual Verification 'Phase 2' (Protocol in workflow.md)

## Phase 3: Context Switching & Traps
- [ ] Task: Set up Trap Vector Base Address (`stvec`)
- [ ] Task: Implement trap handler to catch exceptions (Store Access Fault)
- [ ] Task: Implement `switch_to_user_mode()` function using `mret`/`sret`
- [ ] Task: Conductor - User Manual Verification 'Phase 3' (Protocol in workflow.md)

## Phase 4: Integration & Verification
- [ ] Task: Create a dummy "Worker Bee" payload (simple function that writes to forbidden address)
- [ ] Task: Integrate payload loading
- [ ] Task: Run full integration test: Boot -> Load -> Switch -> Trap -> Verify
- [ ] Task: Conductor - User Manual Verification 'Phase 4' (Protocol in workflow.md)
