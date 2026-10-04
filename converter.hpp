#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <cstdint>

// Convert a 16-bit value to binary
std::string toBinary(uint16_t value);

// Convert a 16-bit value to hexadecimal
std::string toHex(uint16_t value);

// Convert a 16-bit value to signed decimal
int16_t toSignedDecimal(uint16_t value);

// Read decimal, hexadecimal, or binary input
uint16_t parseNumber(const std::string& input);

#endif