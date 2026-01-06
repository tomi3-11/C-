#include <stdio.h>

int main()
{
    // find the largest element in an array
    int arr[] = {2, 5, 6, 3, 1, 9, 4, 7};

    // Maximum value
    int max = arr[0];

    // size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++){
	if (arr[i] > max){
	    max = arr[i];
	}

    }
    printf("The larget element is %d.\n", max);

    return 0;


}
