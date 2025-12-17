#include <stdio.h>

int main() {
    // Find the size (in bytes) of:
    // 1. An integer array of size 10
    int nums[10];
    int size = sizeof(nums);
    printf("Size in bytes for integer array: %d\n", size);

}
