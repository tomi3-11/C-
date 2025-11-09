#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    // number
    int num;
    //getting user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // if statements
    // if (num % 1 == 0 && num % num == 0) {
    //     printf("The number %d is a prime number.\n", num);
    // } else {
    //     printf("The number %d is not a prime number.\n", num);
    // }

    if (num <= 1) {
        printf("Number %d is not a prime number.\n", num);
        return 0;
    }

    int isPrime = 1; 

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