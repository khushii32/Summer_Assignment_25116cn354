set bits in a number
#include<stdio.h>
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1; // Increment count if the last bit is set
        n >>= 1; // Right shift n by 1 to check the next bit
    }
    return count;
}