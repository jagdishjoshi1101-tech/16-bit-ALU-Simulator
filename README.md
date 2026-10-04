# 16-Bit ALU Simulator

A command-line 16-bit Arithmetic Logic Unit (ALU) simulator written in C++.

This project demonstrates how basic arithmetic, logical, and bitwise operations are performed at the processor level while tracking common CPU status flags.

## Features

The simulator supports the following 16-bit operations:

- ADD – Addition
- SUB – Subtraction
- AND – Bitwise AND
- OR – Bitwise OR
- XOR – Bitwise XOR
- NOT – Bitwise NOT
- SHL – Shift Left
- SHR – Shift Right

## CPU Flags

The simulator calculates and displays four common processor flags:

- **Z (Zero)** – Indicates when the result is zero
- **N (Negative)** – Indicates when the result is negative
- **C (Carry)** – Indicates a carry or borrow condition
- **V (Overflow)** – Indicates signed arithmetic overflow

## Number Representations

The program supports input and output in multiple number formats:

- Decimal
- Binary
- Hexadecimal

It also demonstrates 16-bit signed and unsigned values and two's complement representation.

## Project Structure

- `main.cpp` – Main program and command-line interface
- `alu.cpp` – ALU operation implementations
- `alu.hpp` – ALU declarations
- `converter.cpp` – Number conversion functions
- `converter.hpp` – Conversion declarations
- `Makefile` – Build configuration
- `REPORT.md` – Project report and documentation

## Build

Compile the project using:

```bash
make
```

## Run

Run the program using:

```bash
./project1
```

The program will prompt you to enter numbers in decimal, hexadecimal, or binary format and select an ALU operation.

## Clean

Remove the compiled executable using:

```bash
make clean
```

## Example

Example input:

```text
Enter first number (decimal, 0x hex, or 0b binary): 32767
```

The program displays the result in different number representations along with the CPU status flags.

## Technologies

- C++
- Make
- Bitwise operations
- Two's complement representation
- Command-line interface

## What I Learned

Through this project, I practiced:

- Implementing arithmetic and logical operations in C++
- Working with 16-bit signed and unsigned integers
- Understanding binary and hexadecimal number representations
- Detecting carry and signed overflow
- Using bitwise and shift operations
- Organizing a C++ project using header and implementation files
- Building a multi-file C++ program with a Makefile

## Author

**Jagdish Joshi**  
Computer Science Student  
Youngstown State University