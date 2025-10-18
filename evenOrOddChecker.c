#include <stdio.h>
#include <stdlib.h>
/* A simple program that checks for even or odd in a number.
    1. Initialize variables and data types
    2. Accept user inputs
    3. Evaluate user inputs using Conditionals.
    4. Display a friendly
*/ 

int main() {
    // Main function
    int number;
    char input[10];

    while (1) {

        printf("Enter a number: (type 'q' to quit): ");
        scanf("%s", input);

        // Check if user wants to quit
        if (input[0] == 'q' || input[0] == 'Q') {
            printf("Thanks for using this program!");
            break;
        }

        // Convert string to integer
        // scanf("%d", &number);
        number = atoi(input);
    
        // Checking user inputs whether its odd or even
        if (number % 2 == 0) {
            printf("The number %d is Even\n", number);
        } else {
            printf("The number %d is Odd\n", number);
        }
    }

    return 0;
}