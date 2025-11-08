#include <stdio.h>
#include <stdlib.h>

// main function
int main() {
    // Main Function.
    int nums[] = {2, 4, 5};
    
    int length = sizeof(nums) / sizeof(nums[0]);

    int answer = 0;

    for (int i = 0; i < length; i++) {
        answer += nums[i];
    }
    
    printf("The sum of natural numbers is %d\n", answer);
    return 0;
}