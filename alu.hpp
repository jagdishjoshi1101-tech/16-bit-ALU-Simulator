#ifndef ALU_HPP
#define ALU_HPP

#include <cstdint>

struct ALUResult {
    uint16_t result;
    bool Z; // Zero flag
    bool N; // Negative flag
    bool C; // Carry flag
    bool V; // Overflow flag
};

ALUResult add16(uint16_t a, uint16_t b);
ALUResult sub16(uint16_t a, uint16_t b);
ALUResult and16(uint16_t a, uint16_t b);
ALUResult or16(uint16_t a, uint16_t b);
ALUResult xor16(uint16_t a, uint16_t b);
ALUResult not16(uint16_t a);
ALUResult shiftLeft16(uint16_t a);
ALUResult shiftRight16(uint16_t a);

#endif