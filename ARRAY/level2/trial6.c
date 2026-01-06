#include <stdio.h>

int main(){

    // find the second largest element in an array
    int arr[] = {4, 2, 7, 9, 5, 6, 34, 78};

    // array size
    int size = sizeof(arr) / sizeof(arr[0]);

    // maximum and second maximum
    int max = arr[0];
    int secMin = arr[0];

    for (int i = 0; i < size; i++){
	if (arr[i] > max){
	    max = arr[i];
	}
    }

    printf("The second largest %d.\n", max);

    return 0;

}
