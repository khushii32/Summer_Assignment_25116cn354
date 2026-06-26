binary to decimal
#include<stdio.h>
int binaryToDecimal(int n) {
    int decimal = 0, base = 1, last_digit;
    
    while (n > 0) {
        last_digit = n % 10;
        decimal += last_digit * base;
        base *= 2;
        n /= 10;
    }
    
    return decimal;
}