#ifndef BITWISE_OPERATORS_H
#define BITWISE_OPERATORS_H
#include <iostream>
#include <vector>

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
    void setBit(int &a, int b);
    void clearBit(int &a, int b);
    void toggleBit(int &a, int b);
    bool isBitSet(int a, int b);
    bool isBitSet1(int a, int b);
    int countSetBits(int n);
    int countSetBits1(int n);
    int countSetBits2(int n);
    int countSetBits3(int n);
    int totalCountSetBits1ToN(int n);
    void swap(int &a, int &b);
    bool powerOfTwo(int n);
    bool powerOfTwo1(int n);
    int findNumberWithOddOccurences(int arr[], int n);
    int findNumberWithOddOccurences1(int arr[], int n);
    void printOddOccurences(int arr[], int n);
    void printOddOccurences1(int arr[], int n);
    void printPowerSet(std::string str);

    int mostSignificantSetBit(int n);
    int valueOfMostSignificantSetBit(int n);
    int xorfrom1toN(int n);
    int  posOfRightMostDiffBit(int M, int N) ;
    int countBitsFlip(int a, int b);
    int swapBits(unsigned int n);
    int maxConsecutiveOnes(int n);
    int maxANDValue(int arr[], int n);
    int checkSparse(int n);
    int grayToBinary(int n);
    int binaryToGray(int n);
};
#endif // BITWISE_OPERATORS_H