# 4-Bit Ripple Carry Adder using Logic Gates (Logisim)

## Overview

This project implements a 4-bit ripple carry adder using four full adders connected in series. Each full adder is constructed using basic logic gates (AND, OR, XOR) rather than using any pre-built adder components. The design is created and simulated in Logisim.

---

## Objective

To design and simulate a 4-bit ripple carry adder by:

* Building a full adder using only logic gates
* Cascading four full adders to perform 4-bit binary addition
* Observing carry propagation across stages

---

## Theory

### Full Adder

A full adder adds three input bits:

* A (input bit)
* B (input bit)
* Cin (carry-in)

It produces:

* Sum = A ⊕ B ⊕ Cin
* Cout = (A · B) + (Cin · (A ⊕ B))

Each full adder is implemented using:

* XOR gates for sum calculation
* AND and OR gates for carry generation

---

### Ripple Carry Adder

A ripple carry adder connects multiple full adders in sequence:

* The carry-out (Cout) of one stage becomes the carry-in (Cin) of the next stage
* This creates a chain-like propagation of carry

For a 4-bit adder:

* Four full adders are used
* Inputs: A3 A2 A1 A0 and B3 B2 B1 B0
* Output: S3 S2 S1 S0 and final carry Cout

---

## Design Description

1. **Stage 0 (Least Significant Bit)**

   * Inputs: A0, B0, Cin
   * Outputs: S0, C1

2. **Stage 1**

   * Inputs: A1, B1, C1
   * Outputs: S1, C2

3. **Stage 2**

   * Inputs: A2, B2, C2
   * Outputs: S2, C3

4. **Stage 3 (Most Significant Bit)**

   * Inputs: A3, B3, C3
   * Outputs: S3, Cout

---

## Components Used

* XOR Gates
* AND Gates
* OR Gates
* Input Pins
* Output Pins
* Wiring

---

## Working

1. Binary inputs are applied to A and B.
2. The least significant full adder computes the first sum and carry.
3. Carry propagates through subsequent stages.
4. Final output is obtained as a 4-bit sum and a carry-out.

---

## Key Characteristics

* Simple and modular design
* Easy to understand carry propagation
* Delay increases with number of bits due to ripple effect

---

## Limitations

* Slow for large bit sizes due to carry propagation delay
* Not suitable for high-speed arithmetic operations

---

## Applications

* Basic arithmetic units in digital systems
* Learning foundational concepts of binary addition
* Used as a building block for more advanced adders

---

## Conclusion

The project successfully demonstrates the implementation of a 4-bit ripple carry adder using only basic logic gates. It highlights how complex arithmetic operations can be built from simple components and provides insight into propagation delay in sequential addition circuits.

---

## How to Run

1. Open Logisim or Logisim Evolution.
2. Load the `.circ` file.
3. Provide input values using input pins.
4. Observe sum and carry outputs.

---
