#include <stdio.h>
#include <stdlib.h>

int main() {
    // Main function fumctionality
    int numbers[] = {4, 5, 6, 9, 15, 2, 10};

    // Getting the length of the strength
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Getting the highest number from the list
    int max = numbers[0];

    for (int i = 0; i < length; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    // print the result
    printf("The largest number is %d\n", max);

    return 0;
}