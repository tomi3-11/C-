#include <stdio.h>

int main() 
{
    // Print all elements of an array using
    // A. For loop
   
    printf("Using a for Loop: \n");	
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    // B. While loop
    printf("Using a while Loop: \n");

    int count = 0;
    while (count < size) {
        printf("%d\n", arr[count]);
	count ++;
    }

    return 0;    
}
