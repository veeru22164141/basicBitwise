#include "bitwiseOperators.h"

int BitwiseOperators::getBitwiseAND(int a, int b) {
    return a & b;
}

int BitwiseOperators::getBitwiseOR(int a, int b) {
    return a | b;
}
 int BitwiseOperators::getBitwiseXOR(int a, int b) {
    return a ^ b;   
}

int BitwiseOperators::getBitwiseNOT(int a) {
    return ~a;
}

int BitwiseOperators::getBitwiseLeftShift(int a, int b) {
    return a << b;
}

int BitwiseOperators::getBitwiseRightShift(int a, int b) {
    return a >> b;
}

