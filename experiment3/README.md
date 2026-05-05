# 8-Bit Shift Register using D Flip-Flops (Logisim)

## Overview

This project implements an 8-bit shift register using D flip-flops in Logisim. The circuit shifts data sequentially with each clock pulse and provides parallel outputs from each stage.

---

## Objective

To design and simulate an 8-bit shift register using D flip-flops and observe data shifting behavior with clock pulses.

---

## Theory

A shift register is a sequential circuit used to store and transfer data. It consists of a series of flip-flops connected such that the output of one flip-flop becomes the input of the next.

### Types of Shift Registers

* Serial-In Serial-Out (SISO)
* Serial-In Parallel-Out (SIPO)
* Parallel-In Serial-Out (PISO)
* Parallel-In Parallel-Out (PIPO)

This implementation is a **Serial-In Parallel-Out (SIPO)** shift register.

---

## Working

* Data is applied serially at the input.
* On each clock pulse:

  * The input bit enters the first flip-flop.
  * Existing data shifts one position to the right.
* After 8 clock pulses:

  * The entire 8-bit data is stored in the register.
* Outputs from each flip-flop provide the parallel output.

---

## Components Used

* 8 D Flip-Flops
* Clock signal
* Input pin (Serial input)
* Output pins (Parallel outputs)
* Wiring

---

## Operation

1. Apply input bit (0 or 1) at the serial input.
2. Trigger the clock.
3. Observe shifting of bits across flip-flops.
4. Monitor outputs to see stored binary value.

---

## Applications

* Data storage and transfer
* Serial to parallel conversion
* Digital communication systems
* Temporary data buffering

---

## Conclusion

The 8-bit shift register successfully demonstrates sequential data storage and shifting. It shows how flip-flops can be combined to create memory elements and perform controlled data movement.

---

## How to Run

1. Open the `.circ` file in Logisim or Logisim Evolution.
2. Provide input using the input pin.
3. Toggle the clock signal.
4. Observe outputs at each stage.

---
