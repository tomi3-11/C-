#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    // number
    int num;
    //getting user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Neglecting numbers below and including 1
    if (num <= 1) {
        printf("Number %d is not a prime number.\n", num);
        return 0;
    }

    // a boolean to assume True for any number
    int isPrime = 1; 

    // Check divisors up to the square root of the number
    for (int i = 2; i < sqrt(num) + 1; i ++) {
        if (num % i == 0) {
            isPrime = 0; // found a divisor not a prime
            break;
        }
    }

    if (isPrime) {
        printf("Number %d is a prime number.\n", num);
    } else {
        printf("Number %d is not a prime number.\n", num);
    }
    
    return 0;
}