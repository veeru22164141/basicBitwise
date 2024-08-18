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
    std::cout << "Is Bit Set: " << bitwiseOperators.isBitSet(a, b) << std::endl;
    std::cout << "Is Bit Set: " << bitwiseOperators.isBitSet1(a, b) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits(a) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits1(a) << std::endl;
    std::cout << "Count Set Bits: " << bitwiseOperators.countSetBits2(a) << std::endl;
    a=16;
    std::cout << "Power of Two: " << (bitwiseOperators.powerOfTwo(a) ?"true": "false") << std::endl;
    std::cout << "Power of Two: " << (bitwiseOperators.powerOfTwo1(a) ? "true": "false") << std::endl;
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Number with Odd Occurences: " << bitwiseOperators.findNumberWithOddOccurences(arr, n) << std::endl;
    std::cout << "Number with Odd Occurences: " << bitwiseOperators.findNumberWithOddOccurences1(arr, n) << std::endl;


    bitwiseOperators.printOddOccurences(arr, n);
    bitwiseOperators.printOddOccurences1(arr, n);
    std::string str = "abc";
    bitwiseOperators.printPowerSet(str);


    return 0;
}