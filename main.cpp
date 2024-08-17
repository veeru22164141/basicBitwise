#include"bitwiseOperators.h"

int main() {
    BitwiseOperators bitwiseOperators;
    int a = 5;
    int b = 3;
    std::cout << "Bitwise AND: " << bitwiseOperators.getBitwiseAND(a, b) << std::endl;
    std::cout << "Bitwise OR: " << bitwiseOperators.getBitwiseOR(a, b) << std::endl;
    std::cout << "Bitwise XOR: " << bitwiseOperators.getBitwiseXOR(a, b) << std::endl;
    std::cout << "Bitwise NOT: " << bitwiseOperators.getBitwiseNOT(a) << std::endl;
    std::cout << "Bitwise Left Shift: " << bitwiseOperators.getBitwiseLeftShift(a, b) << std::endl;
    std::cout << "Bitwise Right Shift: " << bitwiseOperators.getBitwiseRightShift(a, b) << std::endl;
    return 0;
}