#include <stdio.h>

int main() {
    // Count how many elements are positive, negative, zero
    int arr[] = {1, -3, 6, 7, -4, -9, 0, 4, 2, 0, 6, -2, 0};
    int posCount = 0;
    int negCount = 0;
    int zeroCount = 0;
    // Size of the array
    int size = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < size; i++) {
	if (arr[i] < 0) {
	    // negative count
	    negCount += 1;
	} else if (arr[i] > 0) {
	    // positive count
	    posCount += 1;
 	} else {
	    // zero count
	    zeroCount += 1;
	}
    }
    // display
    printf("Positive Count: %d\n", posCount);
    printf("Negative Count: %d\n", negCount);
    printf("Zero Count: %d\n", zeroCount);

    return 0;    
}


