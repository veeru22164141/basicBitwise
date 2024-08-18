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
    bool isBitSet(int a, int b);
    bool isBitSet1(int a, int b);
    int countSetBits(int n);
    int countSetBits1(int n);
    int countSetBits2(int n);
    bool powerOfTwo(int n);
    bool powerOfTwo1(int n);
    int findNumberWithOddOccurences(int arr[], int n);
    int findNumberWithOddOccurences1(int arr[], int n);
    void printOddOccurences(int arr[], int n);
    void printOddOccurences1(int arr[], int n);
    void printPowerSet(std::string str);
};
#endif // BITWISE_OPERATORS_H