# Logical Shift Operations using GDB

## Overview

This experiment demonstrates logical shift operations in C and analyzes their execution using GDB (GNU Debugger). The focus is on understanding how binary data is shifted left and right and how it affects the value.

---

## Objective

* To implement logical left shift and logical right shift operations in C
* To observe bit-level changes during execution
* To analyze the behavior step-by-step using GDB

---

## Theory

### Logical Left Shift (<<)

* Shifts all bits to the left by a specified number of positions
* Zeros are filled in the least significant bits (right side)
* Equivalent to multiplication by (2^n) (for unsigned values)

Example:

```text
0001 << 1 → 0010
```

---

### Logical Right Shift (>>)

* Shifts all bits to the right
* Zeros are filled in the most significant bits (for unsigned types)
* Equivalent to division by (2^n) (for unsigned values)

Example:

```text
0100 >> 1 → 0010
```

---

### Note

* This experiment excludes carry/rotate operations
* Only logical shifting is considered
* Behavior may differ for signed numbers (implementation-dependent)

---

## Procedure (Using GDB)

### Step 1: Compile the Program

```id="l8yqzm"
gcc -g filename.c -o output
```

---

### Step 2: Start GDB

```id="l2a3ye"
gdb ./output
```

---

### Step 3: Set Breakpoint

```id="9n3cjs"
break main
```

---

### Step 4: Run Program

```id="p4h0bd"
run
```

---

### Step 5: Execute Step-by-Step

* `next` → execute next line
* `step` → enter function

---

### Step 6: Inspect Values

```id="d3y8rm"
print variable
```

---

## Observations

* Left shift increases the value by powers of 2
* Right shift decreases the value by powers of 2
* Bits shifted out are discarded
* Vacant positions are filled with zeros

---

## Result

Logical left and right shift operations were successfully implemented and analyzed. The bit-level changes and their effect on numerical values were observed using GDB.

---

## Conclusion

Logical shift operations provide an efficient way to perform multiplication and division by powers of two. Using GDB helps visualize how bits move within a number during execution.

---

## Author

Keerthana Salla

---
