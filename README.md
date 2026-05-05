# Addressing Modes using GDB

## Overview

This experiment demonstrates different types of addressing modes in C programs and analyzes their behavior using GDB (GNU Debugger). The focus is on understanding how operands are accessed during program execution.

---

## Objective

* To study various addressing modes in programming
* To observe how data is accessed in memory
* To analyze execution step-by-step using GDB

---

## Addressing Modes Covered

### 1. Implicit Addressing

* Operand is implied in the instruction
* No explicit operand is specified
* Example: increment/decrement operations

---

### 2. Direct Addressing

* The address of the operand is directly specified
* Value is accessed using a variable name

---

### 3. Indirect Addressing

* The address of the operand is stored in another variable (pointer)
* Accessed using pointer dereferencing

---

### 4. Indexed Addressing

* Address is computed using a base address and an index
* Commonly used with arrays

---

### 5. Register Addressing

* Operands are stored in CPU registers
* In C, local variables often map to registers during execution

---

## Procedure (Using GDB)

### Step 1: Compile with Debugging

```id="3zqvsa"
gcc -g filename.c -o output
```

---

### Step 2: Start GDB

```id="qdrpxy"
gdb ./output
```

---

### Step 3: Set Breakpoint

```id="sn9o2k"
break main
```

---

### Step 4: Run Program

```id="hlazlb"
run
```

---

### Step 5: Step Execution

* `next` → execute next line
* `step` → enter function

---

### Step 6: Inspect Values

```id="8f1dka"
print variable
print *pointer
```

---

## Observations

* Implicit operations do not require explicit operands.
* Direct addressing accesses variables directly from memory.
* Indirect addressing uses pointers to access data.
* Indexed addressing is used in array traversal.
* Register addressing improves execution speed by storing values in CPU registers.

---

## Result

Different addressing modes were successfully studied and analyzed using GDB. The execution flow and memory access patterns were observed clearly.

---

## Conclusion

Understanding addressing modes helps in analyzing how data is accessed and manipulated at a low level. Using GDB provides a clear view of memory behavior and enhances debugging skills.

---

## Author

Keerthana Salla

---
