#include "converter.hpp"
#include <bitset>
#include <sstream>
#include <iomanip>
#include <stdexcept>

std::string toBinary(uint16_t value) {
    return std::bitset<16>(value).to_string();
}

std::string toHex(uint16_t value) {
    std::stringstream ss;
    ss << "0x"
       << std::uppercase
       << std::hex
       << std::setw(4)
       << std::setfill('0')
       << value;
    return ss.str();
}

int16_t toSignedDecimal(uint16_t value) {
    return static_cast<int16_t>(value);
}

uint16_t parseNumber(const std::string& input) {
    long value;

    if (input.size() > 2 && input[0] == '0' &&
        (input[1] == 'b' || input[1] == 'B')) {
        // Binary
        value = std::stol(input.substr(2), nullptr, 2);
    }
    else if (input.size() > 2 && input[0] == '0' &&
             (input[1] == 'x' || input[1] == 'X')) {
        // Hexadecimal
        value = std::stol(input, nullptr, 16);
    }
    else {
        // Decimal
        value = std::stol(input, nullptr, 10);
    }

    return static_cast<uint16_t>(value);
}