largest prime factor
#include<stdio.h>
int main() {
    long long number = 600851475143;
    long long largest_prime = -1;

    // Check for the number of 2s that divide number
    while (number % 2 == 0) {
        largest_prime = 2;
        number /= 2;
    }

    // number must be odd at this point, so we can skip even numbers
    for (long long i = 3; i * i <= number; i += 2) {
        while (number % i == 0) {
            largest_prime = i;
            number /= i;
        }
    }

    // This condition is to check if number is a prime number greater than 2
    if (number > 2) {
        largest_prime = number;
    }

    printf("The largest prime factor is: %lld\n", largest_prime);
    return 0;
}