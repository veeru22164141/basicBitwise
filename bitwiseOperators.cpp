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

void BitwiseOperators::setBit(int &a, int b) {
    //set the bth bit
    //a=5, b=3
    //a=101, b=3
    //1<<2=100
    //a|1<<2=101|100=101
    a = a | (1 << (b-1));//set the bth bit
}
void BitwiseOperators::clearBit(int &a, int b) {
    //clear the bth bit
    //a=5, b=3
    //a=101, b=3
    //1<<2=100
    //~(1<<2)=011
    //a&~(1<<2)=101&011=001
    a = a & ~(1 << (b-1));//clear the bth bit
}

void BitwiseOperators::toggleBit(int &a, int b) {
    //toggle the bth bit
    //a=5, b=3
    //a=101, b=3
    //1<<2=100
    //a^1<<2=101^100=001
    a = a ^ (1 << (b-1));//toggle the bth bit
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

int BitwiseOperators::countSetBits3(int n) {
    //using lookup table
    int count = 0;
    int table[256]={0};
    for (int i = 1; i < 255; i++) {
        table[i] = table[i&i-1]+1;
    }
    return (table[n & 0xff]+table[(n>>8) & 0xff]+table[(n>>16) & 0xff]+table[(n>>24) & 0xff]);
}

int BitwiseOperators::totalCountSetBits1ToN(int n) {
    //Naive approach
   // Expected Time Complexity: O(log N).
    //Expected Auxiliary Space: O(1).
    int count = 0;
    int i=0;
    //Traverse through all bit positions
    while((1<<i)<=n) {
      // Find The number of full cycle of 2^(i+1) that are completed in n
        int fullCycles = n/(1<<(i+1));
        // calculate bits contributed by full cycles
        count += fullCycles*(1<<i);
        // calculate bits contributed by the remaining part
        int partialCycle = (n + 1)%(1<<(i+1));
        count += partialCycle > (1<<i) ? partialCycle - (1<<i) : 0;
        i++;
    }
    return count;
}

void BitwiseOperators::swap(int &a, int &b) {
    //using XOR
    a = a ^ b;//a=5, b=3, a=5^3=6
    b = a ^ b;//b=6^3=5
    a = a ^ b;//a=6^5=3
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

int BitwiseOperators::mostSignificantSetBit(int n) {
    //Naive approach
    int res = 0;
    while(n) {
        n = n >> 1;
        res++;
    }
    return res;
}
int BitwiseOperators::valueOfMostSignificantSetBit(int n) {
    //Naive approach
    //Given a number N, find the most significant set bit in the given number
   if (n == 0) return 0; // Edge case for 0
    int msb = 0;
    while (n != 0) {
        n = n >> 1;
        msb++;
    }
    return 1 << (msb - 1);
}

int BitwiseOperators::xorfrom1toN(int n) {
    //Naive approach
    int rem = n % 4;//if n is multiple of 4, then xor will be n, if n%4=1, then xor will be 1, if n%4=2, then xor will be n+1, else 0
    if (rem == 0) return n;//if n is multiple of 4
    if (rem == 1) return 1;//if n%4=1
    if (rem == 2) return n + 1;//if n%4=2
    return 0;//if n%4=3
}

int BitwiseOperators::posOfRightMostDiffBit(int M, int N) {
    //the task is to complete the function posOfRightMostDiffBit() which takes two arguments M and N and returns the position of first different bits in M and N from right.
     //If both m and n are the same then return -1 in this case.

    //Expected Time Complexity: O(max(log M, log N)).
    //Expected Auxiliary Space: O(1).
   // If both numbers are the same, return -1
    if (M == N) return -1;
    
    // XOR of M and N will have set bits where M and N differ
    int x = M ^ N;
    
    // Find position of the rightmost set bit in x
    int pos = 1; // Position starts from 1
    while ((x & 1) == 0) {
        x = x >> 1;
        pos++;
    }
    
    return pos;
}

int BitwiseOperators::countBitsFlip(int a, int b) {
    //Given two numbers A and B, the task is to count the number of bits needed to be flipped to convert A to B.
    //Expected Time Complexity: O(log N).
    //Expected Auxiliary Space: O(1).
    // XOR of A and B will have set bits where A and B differ
    int x = a ^ b;
    
    // Count the number of set bits in x
    int count = 0;
    while (x > 0) {
        // Increment count for each set bit
        count += (x & 1);
        // Right shift x to check the next bit
        x = x >> 1;
    }
    
    return count;
}

int BitwiseOperators::swapBits(unsigned int n) {
 // Your Task: Your task is to complete the function swapBits() which takes an integer and returns an integer with all the odd and even bits swapped.


    //Expected Time Complexity: O(1).
    //Expected Auxiliary Space: O(1).
     // Mask to get even bits
    unsigned int even_bits = n & 0xAAAAAAAA;
    
    // Mask to get odd bits
    unsigned int odd_bits = n & 0x55555555;
    
    // Right shift even bits to odd positions
    even_bits >>= 1;
    
    // Left shift odd bits to even positions
    odd_bits <<= 1;
    
    // Combine the shifted odd and even bits
    return (even_bits | odd_bits);
}

int BitwiseOperators::maxConsecutiveOnes(int n) {

    //task is to complete the function maxConsecutiveOnes() which returns the length of the longest consecutive 1s in the binary representation of given N.

    //Expected Time Complexity: O(log N).
    //Expected Auxiliary Space: O(1).
   int max_count = 0;  // To store the maximum length of consecutive 1s
    int current_count = 0;  // To store the current length of consecutive 1s
    
    // Traverse through all bits of N
    while (n > 0) {
        // If the current bit is 1
        if (n & 1) {
            current_count++;  // Increment the current count of 1s
        } else {
            // If the current bit is 0, update max_count if needed and reset current_count
           
            max_count = max_count>current_count?max_count:current_count;
            current_count = 0;
        }
        n = n >> 1;  // Right shift N to check the next bit
    }
    
    // Final check for the last sequence of 1s
    max_count = max_count>current_count?max_count:current_count;
    
    return max_count;
}

int BitwiseOperators::maxANDValue(int arr[], int n) {
     int result = 0;  // This will store the maximum AND value

    // Traverse from the most significant bit to the least significant bit
    for (int bit = 31; bit >= 0; bit--) {
        // Create a candidate mask by setting the current bit in the result
        int candidate_mask = result | (1 << bit);
        
        // Count how many numbers satisfy the condition with this candidate mask
        int count = 0;
        for (int i = 0; i < n; i++) {
            if ((arr[i] & candidate_mask) == candidate_mask) {
                count++;
            }
        }
        
        // If there are at least two numbers, update the result
        if (count >= 2) {
            result = candidate_mask;
        }
 
    }
    return result;
}

int BitwiseOperators::checkSparse(int N)
{
    //The task is to complete the function checkSparse() that takes n as a parameter and returns 1 if the number is sparse else returns 0.


    //Expected Time Complexity: O(1).
    //Expected Auxiliary Space: O(1).
    // if N &(N>>1) is not 0, then N is not sparse
    if(N & (N>>1) == 0) return 1;
    return 0;
}

int BitwiseOperators::grayToBinary(int n) {
    //The task is to complete the function grayToBinary() which takes an integer n as input and returns its equivalent binary number.

    //Expected Time Complexity: O(log N).
    //Expected Auxiliary Space: O(1).
    int res = n;
    while(n >>= 1) {
        res ^= n;
    }
    return res;
}

int BitwiseOperators::binaryToGray(int n) {
    //The task is to complete the function binaryToGray() which takes an integer n as input and returns its equivalent gray code.

    //Expected Time Complexity: O(1).
    //Expected Auxiliary Space: O(1).

    return n ^ (n >> 1);
}