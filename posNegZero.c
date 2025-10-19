#include <stdio.h>
#include <stdlib.h>

#define True 1

int main() {
    // Main function of negative or positive.
    int number;
   
    while (True) {
        // inputs
        printf("Enter a number: ");
        scanf("%d", &number);

        // Evaluate the user input.
        if (number > 0) {
            // Positive
            printf("The number %d is positive.\n", number);
        } else if (number < 0) {
            // Negative
            printf("The number %d is negative.\n", number);
        } else {
            // Zero
            printf("The number %d is zero.\n", number);
        }
    }
}