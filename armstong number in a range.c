armstong number in a range
#include<stdio.h>
int main() {
    int lower, upper, num, sum, temp, remainder, digits;

    printf("Enter the lower and upper range: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);
    
    for(num = lower; num <= upper; num++) {
        sum = 0;
        temp = num;
        digits = 0;

        // Count the number of digits
        while(temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        // Calculate the sum of the digits raised to the power of the number of digits
        while(temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        // Check if the sum is equal to the original number
        if(sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}