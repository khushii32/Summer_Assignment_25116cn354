recursive reverse number
#include<stdio.h>
int reverseNumber(int num) {
    static int rev_num = 0;
    static int base_pos = 1;

    if (num > 0) {
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
        reverseNumber(num / 10);
    }
    return rev_num;
}