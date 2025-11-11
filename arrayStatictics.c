#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int sum(int array[]);

int main(void) {
    // Find sum, average, min, and max of array elements.
    int array[] = {2, 5, 6, 8, 1, 9};

    int sum;

    sum = sumOf(array);
    printf("%d", sum);
}

int sumOf(int array[]) {
    // Calculates the sum of an array
    int sum = 0;

    int length = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < length; i++){
        sum += array[i];
    }
}
int sum(int array[]) {
    // Calculates the average of an array
}
int sum(int array[]) {
    // Calculates the min of an array
}
int sum(int array[]) {
    // Calculates the max of an array
}