#include <stdio.h>
// A simple program that checks for even or odd in a number.
int main() {
    // Main function
    int number;
    // char result;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number %d is Even", number);
    } else {
        printf("The number %d is Odd", number);
    }
}