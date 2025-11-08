#include <stdio.h>
#include <stdlib.h>

// main function
int main() {
    // Initializing an array
    int nums[] = {2, 4, 5};
    // Getting the size of the array
    int length = sizeof(nums) / sizeof(nums[0]);
    // Initializing the answer variable to 0 so as to be added to 
    int answer = 0;

    // Looping through all the contents in the array
    for (int i = 0; i < length; i++) {
        // adding the individual member to the answer variable
        answer += nums[i];
    }
    
    // Displaying the answer to the user
    printf("The sum of natural numbers is %d\n", answer);
    return 0;
}