#include <stdio.h>

int main()
{
    // Getting the average of and array
    int arr[] = {2, 5, 4, 7, 8, 9};

    int sum = 0;

    // Getting the length of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
	// adding all the numbers to the sum
	sum += arr[i];
    }

    // the avarage is the sum / size
    float average = (float)sum / size;

    // Displaying to the user
    printf("The sum of the array is %d.\n", sum);
    printf("The average is %f.\n", average);

    return 0;

}
