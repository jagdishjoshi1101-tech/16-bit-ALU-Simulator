# CSIS 3740 Project 1
## Data Representation and 16-bit ALU

Name: Jagdish Joshi

## 1. Project Overview

The purpose of this project is to practice 16-bit data representation and implement a simple Arithmetic Logic Unit (ALU). The program converts numbers between decimal, binary, and hexadecimal representations and performs several ALU operations.

The ALU supports:

- Addition
- Subtraction
- AND
- OR
- XOR
- NOT
- Shift left
- Shift right

The program also calculates the Z, N, C, and V status flags.

## 2. Two's Complement

Two's complement is a method used to represent signed integers in binary.

In a 16-bit system, the range of signed numbers is:

- Minimum: -32768
- Maximum: 32767

To find the two's complement representation of a negative number, the bits of the positive number are inverted and 1 is added.

For example, the 16-bit representation of 1 is:

0000000000000001

Invert the bits:

1111111111111110

Add 1:

1111111111111111

Therefore, -1 is represented as:

Binary: 1111111111111111  
Hexadecimal: 0xFFFF

Another important example is -32768:

Binary: 1000000000000000  
Hexadecimal: 0x8000

## 3. ALU Status Flags

The ALU uses four status flags.

### Z - Zero Flag

Z is set to 1 when the result of an operation is zero. Otherwise, it is 0.

### N - Negative Flag

N is set to 1 when bit 15 of the 16-bit result is 1. This indicates a negative value when the result is interpreted as a signed two's complement integer.

### C - Carry Flag

For addition, C is set when a carry occurs beyond the 16-bit result.

For subtraction, the implementation sets C when no borrow is required.

For shift operations, C stores the bit that is shifted out.

### V - Overflow Flag

V indicates signed arithmetic overflow.

For example:

32767 + 1

produces:

Binary: 1000000000000000  
Decimal: -32768

Since 32767 is the largest positive signed 16-bit integer, adding 1 causes signed overflow. Therefore, V is set to 1.

## 4. Testing

The program was tested using the required edge cases.

### Test 1: Zero

Input: 0

Binary: 0000000000000000  
Hexadecimal: 0x0000

Operations that produce zero correctly set Z = 1.

### Test 2: Negative One

Input: -1

Binary: 1111111111111111  
Hexadecimal: 0xFFFF

This test demonstrates the two's complement representation of a negative integer.

### Test 3: INT_MAX

Input: 32767

Binary: 0111111111111111  
Hexadecimal: 0x7FFF

Testing 32767 + 1 produced -32768 and correctly set V = 1.

### Test 4: INT_MIN

Input: -32768

Binary: 1000000000000000  
Hexadecimal: 0x8000

This verifies the minimum signed value that can be represented using 16 bits.

## 5. Example Output

Example input:

First number: 32767  
Second number: 1

Addition result:

Result: -32768  
Binary: 1000000000000000  
Hex: 0x8000  
Flags: Z=0 N=1 C=0 V=1

## 6. Conclusion

This project demonstrates how decimal, binary, and hexadecimal values are related in a 16-bit computer system. It also demonstrates two's complement representation, basic ALU operations, and the use of status flags to describe the result of arithmetic and logical operations.