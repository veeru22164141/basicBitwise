#include "bitwiseOperators.h"

int BitwiseOperators::getBitwiseAND(int a, int b) {
    return a & b;//if both bits are 1, then the result is 1, else 0
}

int BitwiseOperators::getBitwiseOR(int a, int b) {
    return a | b;//if any of the bits is 1, then the result is 1, else 0
}
 int BitwiseOperators::getBitwiseXOR(int a, int b) {
    return a ^ b;   //if both bits are different, then the result is 1, else 0
}

int BitwiseOperators::getBitwiseNOT(int a) {
    return ~a;//if the bit is 1, then the result is 0, else 1
}

int BitwiseOperators::getBitwiseLeftShift(int a, int b) {
    return a << b;//shift the bits to the left by b positions
}

int BitwiseOperators::getBitwiseRightShift(int a, int b) {
    return a >> b;//shift the bits to the right by b positions
}
bool BitwiseOperators::isBitSet(int a, int b) {
    return (a & (1 << (b-1))) != 0;//check if the bth bit is set
}
bool BitwiseOperators::isBitSet1(int a, int b) {
    return (1 & (a >> (b-1))) != 0;//check if the bth bit is set
}

int BitwiseOperators::countSetBits(int n) {
    //Naive approach
    int count = 0;
    while (n) {
        count += n & 1;//check if the least significant bit is set
        n >>= 1;
    }
    return count;
}
int BitwiseOperators::countSetBits1(int n) {
    //Brian Kernighan's Algorithm
    int count = 0;
    while (n) {
        n &= (n-1);//clear the least significant bit set
        count++;
    }
    return count;
}
int BitwiseOperators::countSetBits2(int n) {
    //using lookup table
    int count = 0;
    int table[256]={0};
    for (int i = 1; i < 255; i++) {
        table[i] = table[i&i-1]+1;
    }
    for (int i = 0; i < 4; i++) {
        count += table[n & 0xff];
        n >>= 8;
    }
    return count;
}

bool BitwiseOperators::powerOfTwo(int n) {
    //Naive approach
    if(n == 0) return false;
    while(n!=1) {
        if(n%2 != 0) return false;
        n /= 2;
    }
    return true;
}
bool BitwiseOperators::powerOfTwo1(int n) {
    //Brian Kernighan's Algorithm
    return n && !(n & n-1);//if n is power of 2, then n & n-1 will be 0
}

int BitwiseOperators::findNumberWithOddOccurences(int arr[], int n) {
    //Naive approach
    int res = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count % 2 != 0) res = arr[i];

    }
    return res;
}
int BitwiseOperators::findNumberWithOddOccurences1(int arr[], int n) {
    //XOR approach
    int res = 0;
    for (int i = 0; i < n; i++) {
        res ^= arr[i];
    }
    return res;
}
void BitwiseOperators::printOddOccurences(int arr[], int n) {
    //Naive approach
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count % 2 != 0) std::cout << arr[i] << " ";
    }
}

void BitwiseOperators::printOddOccurences1(int arr[], int n) {
    //XOR approach
    int x= arr[0];
    for(int i = 1; i < n; i++) { //get the xor of all elements
        x ^= arr[i];
    }
    std::cout << x << std::endl;

    int setBit = x & ~(x-1);//get the rightmost set bit
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {   //divide the array into two parts, one with set bit and other without set bit
        if(arr[i] & setBit) //if the bit is set
            a ^= arr[i];//get the xor of the first part
        else 
            b ^= arr[i];//get the xor of the second part
    }
    std::cout << a << " " << b << std::endl;
}

void BitwiseOperators::printPowerSet(std::string str) {
    int n = str.length();
    int powSize = (1 << n);
    for (int counter = 0; counter < powSize; counter++) {
        for (int j = 0; j < n; j++) {
            if(counter & (1 << j)) {
                std::cout << str[j];
            }
        }
        std::cout << std::endl;
    }
}