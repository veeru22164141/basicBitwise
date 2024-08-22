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
    bitwiseOperators.setBit(a, b);
    std::cout << "Set Bit: " << a << std::endl;
    bitwiseOperators.clearBit(a, b);
    std::cout << "Clear Bit: " << a << std::endl;
    bitwiseOperators.toggleBit(a, b);
    std::cout << "Toggle Bit: " << a << std::endl;
    std::cout << "Is Bit Set: " << bitwiseOperators.isBitSet(a, b) << std::endl;
    std::cout << "Is Bit Set: " << bitwiseOperators.isBitSet1(a, b) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits(a) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits1(a) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits2(a) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits3(a) << std::endl;
    std::cout << "Total Count Set Bits from 1 to N: " << bitwiseOperators.totalCountSetBits1ToN(10) << std::endl;
    int x = 10;
    int y = 5;
    bitwiseOperators.swap(x, y);
    std::cout << "Swap: " << x << " " << y << std::endl;
    a=16;
    std::cout << "Power of Two: " << (bitwiseOperators.powerOfTwo(a) ?"true": "false") << std::endl;
    std::cout << "Power of Two: " << (bitwiseOperators.powerOfTwo1(a) ? "true": "false") << std::endl;
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Number with Odd Occurences: " << bitwiseOperators.findNumberWithOddOccurences(arr, n) << std::endl;
    std::cout << "Number with Odd Occurences: " << bitwiseOperators.findNumberWithOddOccurences1(arr, n) << std::endl;
    std::cout << "Odd Occurences: ";

    bitwiseOperators.printOddOccurences(arr, n);
    std::cout << std::endl;
    std::cout << "Odd Occurences: ";
    bitwiseOperators.printOddOccurences1(arr, n);
    std::cout << std::endl;
    std::cout << "Power Set: ";
    std::string str = "abc";
    bitwiseOperators.printPowerSet(str);
    std::cout << std::endl;
    std::cout << "Most Significant Set Bit: " << bitwiseOperators.mostSignificantSetBit(a) << std::endl;
    std::cout << "Value of Most Significant Set Bit: " << bitwiseOperators.valueOfMostSignificantSetBit(a) << std::endl;
    std::cout << "XOR from 1 to N: " << bitwiseOperators.xorfrom1toN(a) << std::endl;
    int M = 11;
    int N = 9;
    std::cout << "Position of Right Most Different Bit: " << bitwiseOperators.posOfRightMostDiffBit(M, N) << std::endl;
    std::cout << "Count Bits Flip: " << bitwiseOperators.countBitsFlip(M, N) << std::endl;

    std::cout << "Swap Bits: " << bitwiseOperators.swapBits(28) << std::endl;
    std::cout << "Max Consecutive Ones: " << bitwiseOperators.maxConsecutiveOnes(14) << std::endl;
    int arr1[] = {3, 6, 8, 14};
    n = sizeof(arr1)/sizeof(arr1[0]);
    std::cout << "Max AND Value: " << bitwiseOperators.maxANDValue(arr1, n) << std::endl;
    std::cout << "Check Sparse: " << bitwiseOperators.checkSparse(72) << std::endl;
    std::cout << "Gray to Binary: " << bitwiseOperators.grayToBinary(7) << std::endl;
    std::cout << "Binary to Gray: " << bitwiseOperators.binaryToGray(4) << std::endl;


    return 0;
}