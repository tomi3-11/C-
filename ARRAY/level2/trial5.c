#include <stdio.h>

int main(){

    // Finding the smallest element in an array
    int arr[] = {23, 8, 2, 4, 6, 9, 45, 33};

   // get the size
    int size = sizeof(arr) / sizeof(arr[0]);

   // initial minimum element
    int min = arr[0];

    for (int i = 0; i < size; i++) {
	if (arr[i] < min) {
	    // get the min
	    min = arr[i];
	}
    }

    // Display the smallest number
    printf("The smallest element is %d.\n", min);


    return 0;
     

}
