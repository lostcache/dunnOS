# DunnOS: A Peer-to-Peer Native OS for AI Agents

**DunnOS** is a secure, efficient, and resilient operating system specifically designed for AI agents operating in a peer-to-peer environment. It implements a hybrid architecture acting as a secure "Hive," managing specialized tasks through ephemeral, isolated units.

## Architecture: "The Hive"

The system uses a hybrid Microkernel + Unikernel model:

*   **The Foundation (Microkernel):** Provides hardware isolation and security enforcement.
*   **The Brain (Standard Process):** Manages the Agent's core logic (LLM Orchestrator, Planner, DB).
*   **The Tools (Unikernels):** Ephemeral, single-purpose "Worker Bees" spawned for specific tasks (P2P networking, parsing, crypto).

## Technology Stack

*   **Architecture:** RISC-V 32-bit (`riscv32`)
*   **Language:** C (C11)
*   **Compiler:** Clang
*   **Runtime:** QEMU (`virt` machine)

## Current Status

**Status:** 🚧 In Development (Pre-Alpha)

We are currently working on **Track 1: Basic Unikernel Isolation Primitives**.
The goal is to establish the fundamental memory protection and process switching mechanisms required to host "Worker Bee" unikernels.

## Roadmap

- [ ] **Phase 1: Isolation** - Implement memory protection (PMP) and context switching.
- [ ] **Phase 2: Scheduling** - Basic round-robin scheduling for worker bees.
- [ ] **Phase 3: IPC** - Inter-process communication between Brain and Workers.
- [ ] **Phase 4: Networking** - Host a basic P2P unikernel.

## Getting Started

To build and run the kernel:

```bash
./run.sh
```
