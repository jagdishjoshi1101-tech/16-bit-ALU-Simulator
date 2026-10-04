#include <iostream>
#include <string>
#include "converter.hpp"
#include "alu.hpp"

using namespace std;

void showNumber(uint16_t value) {
    cout << "Decimal: " << toSignedDecimal(value) << endl;
    cout << "Binary : " << toBinary(value) << endl;
    cout << "Hex    : " << toHex(value) << endl;
}

void showALUResult(const string& operation, ALUResult r) {
    cout << operation << endl;
    cout << "Result : " << toSignedDecimal(r.result) << endl;
    cout << "Binary : " << toBinary(r.result) << endl;
    cout << "Hex    : " << toHex(r.result) << endl;
    cout << "Flags  : "
         << "Z=" << r.Z << " "
         << "N=" << r.N << " "
         << "C=" << r.C << " "
         << "V=" << r.V << endl;
    cout << endl;
}

int main() {
    string input1;
    string input2;

    cout << "===== 16-bit Number Converter and ALU =====" << endl;

    cout << "\nEnter first number (decimal, 0x hex, or 0b binary): ";
    cin >> input1;

    uint16_t a = parseNumber(input1);

    cout << "\nRepresentations:" << endl;
    showNumber(a);

    cout << "\nEnter second number for ALU operations: ";
    cin >> input2;

    uint16_t b = parseNumber(input2);

    cout << "\n===== ALU RESULTS =====" << endl << endl;

    showALUResult("ADD", add16(a, b));
    showALUResult("SUB", sub16(a, b));
    showALUResult("AND", and16(a, b));
    showALUResult("OR", or16(a, b));
    showALUResult("XOR", xor16(a, b));
    showALUResult("NOT first number", not16(a));
    showALUResult("SHIFT LEFT first number", shiftLeft16(a));
    showALUResult("SHIFT RIGHT first number", shiftRight16(a));

    return 0;
}