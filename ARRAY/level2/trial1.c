#include <stdio.h>


int main()
{
    int arr[] = {1, 2, 4, 5, 7};

    int sum = 0;
    //size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++){
	sum += arr[i];
    }
    printf("The sum of all the contents in the array is %d.\n", sum);

    return 0;
}
