#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int sumOf(int array[], int size);

int main() {
    // Find sum, average, min, and max of array elements.
    int array[] = {2, 5, 6, 8, 1, 9};
    int size = sizeof(array) / sizeof(array[0]);


    // Handling Sum.
    printf("The sum of all the numbers is %d\n", sumOf(array, size));
    return 0;
    
}

int sumOf(int array[], int size) {
    // Calculates the sum of an array
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}






// int sum(int array[]) {
//     // Calculates the average of an array
// }
// int sum(int array[]) {
//     // Calculates the min of an array
// }
// int sum(int array[]) {
//     // Calculates the max of an array
// }