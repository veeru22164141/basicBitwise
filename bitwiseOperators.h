#ifndef BITWISE_OPERATORS_H
#define BITWISE_OPERATORS_H
#include <iostream>

// Your code here
class BitwiseOperators {
public:
    BitwiseOperators()=default;
    ~BitwiseOperators()=default;
    int getBitwiseAND(int a, int b);
    int getBitwiseOR(int a, int b);
    int getBitwiseXOR(int a, int b);
    int getBitwiseNOT(int a);
    int getBitwiseLeftShift(int a, int b);
    int getBitwiseRightShift(int a, int b);
};
#endif // BITWISE_OPERATORS_H