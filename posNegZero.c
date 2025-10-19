#include <stdio.h>
#include <stdlib.h>

#define True 1

int main() {
    // Main function of negative or positive.
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (True) {
        if (number > 0) {
            // Positive
            printf("The number %d is positive.");
        } else if (number < 0) {
            // Negative
            printf("The number %d is negative.");
        } else {
            // Zero
            printf("The number %d is zero.");
        }
    }
}