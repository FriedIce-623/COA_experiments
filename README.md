# COA Experiments Repository

## Overview

This repository contains a collection of Computer Organization and Architecture (COA) experiments implemented in C and Logisim. The experiments focus on understanding low-level concepts such as data structures, addressing modes, bit manipulation, and digital circuits, with analysis performed using GDB where applicable.

---

## Experiments Included

### 1. 4-Bit Ripple Carry Adder (Logisim)

* Designed using basic logic gates (AND, OR, XOR)
* Built using four full adders connected in series
* Demonstrates binary addition and carry propagation

---

### 2. 8-Bit Shift Register (Logisim)

* Implemented using D flip-flops
* Serial-In Parallel-Out (SIPO) configuration
* Demonstrates sequential data shifting with clock pulses

---

### 3. Data Structures using GDB

* Implementations:

  * Queue (FIFO)
  * Stack (LIFO)
  * Linked List (dynamic)
* Focus on step-by-step execution using GDB
* Observes variable changes and memory behavior

---

### 4. Addressing Modes using GDB

* Types covered:

  * Implicit
  * Direct
  * Indirect (pointer-based)
  * Indexed (array-based)
  * Register
* Demonstrates how operands are accessed in memory
* Analyzed using GDB commands

---

### 5. Logical Shift Operations

* Left Shift (`<<`)
* Right Shift (`>>`)
* Focus on bit-level manipulation
* Observed using GDB for step-by-step execution
* Carry/rotate operations excluded

---

## Tools Used

* C Programming (GCC Compiler)
* GDB (GNU Debugger)
* Logisim / Logisim Evolution

---

## How to Run (C Programs)

### Compile

```id="4y2gpa"
gcc -g filename.c -o output
```

### Run with GDB

```id="x2a1dn"
gdb ./output
```

---

## Common GDB Commands

* `break main` → set breakpoint
* `run` → start execution
* `next` → execute next line
* `step` → step into function
* `print variable` → inspect variable

---

## Learning Outcomes

* Understanding of fundamental data structures
* Insight into memory access and addressing techniques
* Visualization of program execution using GDB
* Knowledge of digital circuit design concepts
* Understanding of bit-level operations

---

## Repository Structure

```
COA_experiments/
│
├── Experiment-1 (Ripple Adder)
├── Experiment-2 (Shift Register)
├── Experiment-3 (Data Structures)
├── Experiment-4 (Addressing Modes)
├── Experiment-5 (Shift Operations)
```

---

## Author

Keerthana Salla

---
