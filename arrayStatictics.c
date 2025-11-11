#include <stdio.h>
#include <stdlib.h>

// Function prototypes
float sumOf(float array[], float size);
float avegOf(float array[], float size);

float main() {
    // Find sum, average, min, and max of array elements.
    float array[] = {2, 5, 6, 8, 1, 9};
    float size = sizeof(array) / sizeof(array[0]);


    // Handling Sum.
    printf("The sum of all the numbers is %f\n", sumOf(array, size));
    // Handling Average.
    printf("The sum of all the numbers is %f\n", avegOf(array, size));
    return 0;
    
}

float sumOf(float array[], float size) {
    // Calculates the sum of an array
    float sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}






float avegOf(float array[], float size) {
    // Calculates the average of an array
    float avg = sumOf(array, size) / size;
    return avg;
}
// float sum(float array[]) {
//     // Calculates the min of an array
// }
// float sum(float array[]) {
//     // Calculates the max of an array
// }