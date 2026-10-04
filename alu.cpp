#include "alu.hpp"

static ALUResult makeResult(uint16_t result, bool C = false, bool V = false) {
    ALUResult r;

    r.result = result;
    r.Z = (result == 0);
    r.N = (result & 0x8000) != 0;
    r.C = C;
    r.V = V;

    return r;
}

ALUResult add16(uint16_t a, uint16_t b) {
    uint32_t full = static_cast<uint32_t>(a) + b;
    uint16_t result = static_cast<uint16_t>(full);

    bool carry = full > 0xFFFF;

    bool overflow =
        ((~(a ^ b) & (a ^ result) & 0x8000) != 0);

    return makeResult(result, carry, overflow);
}

ALUResult sub16(uint16_t a, uint16_t b) {
    uint16_t result = static_cast<uint16_t>(a - b);

    // C indicates no borrow for subtraction.
    bool carry = a >= b;

    bool overflow =
        (((a ^ b) & (a ^ result) & 0x8000) != 0);

    return makeResult(result, carry, overflow);
}

ALUResult and16(uint16_t a, uint16_t b) {
    return makeResult(a & b);
}

ALUResult or16(uint16_t a, uint16_t b) {
    return makeResult(a | b);
}

ALUResult xor16(uint16_t a, uint16_t b) {
    return makeResult(a ^ b);
}

ALUResult not16(uint16_t a) {
    return makeResult(static_cast<uint16_t>(~a));
}

ALUResult shiftLeft16(uint16_t a) {
    bool carry = (a & 0x8000) != 0;
    uint16_t result = static_cast<uint16_t>(a << 1);

    return makeResult(result, carry);
}

ALUResult shiftRight16(uint16_t a) {
    bool carry = (a & 0x0001) != 0;
    uint16_t result = static_cast<uint16_t>(a >> 1);

    return makeResult(result, carry);
}