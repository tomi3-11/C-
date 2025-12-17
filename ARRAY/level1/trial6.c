#include <stdio.h>

int main() {
    // Show the difference between arr and &arr using printf
    int arr[] = {1, 2};

    int *p;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
	p = &arr[i];
	// displaying the difference using printf
	printf("The output of arr: %d\n", arr[i]);
	printf("The output of &arr: %p\n", p);
    }

    return 0;

}
