#include <stdio.h>

// function prototypes
int reverse(int arr[], int rev[]);

int main() {
    // Reverse an array
    int arr[] = {2, 5, 7, 1, 4, 9};
    
    int rev[];

    // array size
    //int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, rev);
    

    return 0;
}

int reverse(int arr[], int rev[]) {
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
	rev[i] = arr[size - i - 1];
    }
    rev[size] = '\0';

    printf("Reversed as: %d\n", rev);
}


