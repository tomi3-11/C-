#include <stdio.h>

int main() 
{
    // Print all elements of an array using
    // A. For loop
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7};
    
    int size = sizeof(arr[0])/sizeof(arr);
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;    
}
