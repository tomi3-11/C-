#include <stdio.h>
#include <math.h>


int main() {
    // Power of a Number | Implement using recursion. |
    // initializing the project variables
    int num, power, answer;

    // Getting user inputs for the variables stated.
    printf("Base: ");
    scanf("%d", &num);
    printf("index: ");
    scanf("%d", &power);

    // Calculating the power of the Number and index given.
    answer = pow(num, power);

    // Displaying a readable Output to the user.
    printf("%d raised to power %d is %d\n", num, power, answer);

    return 0;
}