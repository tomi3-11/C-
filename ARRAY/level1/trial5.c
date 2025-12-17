#include <stdio.h>

int main() {
    // Find the size (in bytes) of:
    // 1. An integer array of size 10
    int nums[10];
    int size = sizeof(nums);
    printf("Size in bytes for integer array: %d bytes.\n", size);

    // 2. A character array of size 10
    char letters[10];
    int sizeLetters = sizeof(letters);
    printf("Size in bytes for character array: %d bytes.\n", sizeLetters);

    return 0;

}
