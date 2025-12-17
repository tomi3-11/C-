#include <stdio.h>

int main() {

    // Print the memory address of each element in an array
    // Use a for loop
    int array[] = {1, 2, 3, 4, 5};

    int size = sizeof(array) / sizeof(array[0]);

    int *p;

    for (int i = 0; i < size; i++) {
	// display memory address
	p = &array[i];
	printf("Memory Address of %d: %p\n", array[i], p);
    }
}
