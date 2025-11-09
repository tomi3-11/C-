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
        return 0;
    }

    for (int i = 0; i < sqrt(num) + 1; i ++) {
        if (num % i == 0) {
            return 1;
            printf("Number %d is a prime number.\n", num);
        } else {
            printf("Number %d is not a prime number.\n", num);
        }
    }
    
}