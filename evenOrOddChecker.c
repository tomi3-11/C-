#include <stdio.h>

int main() {
    // Main function
    int number;
    char result;

    scanf('%d', &number);

    if (number % 2 == 0) {
        printf("The number %d is Even", number);
    } else {
        printf("The number %d is Odd", number);
    }
}