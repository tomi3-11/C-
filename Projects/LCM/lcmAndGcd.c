#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
int lcm(int a, int b);

int main() {
    // LCM and GCD
    int num1, num2;

    printf("Num 1: ");
    scanf("%d", &num1);
    printf("Num 2: ");
    scanf("%d", &num2);

    // get user input
    /*
    - divide every number by a divisor
    - Until 1 is obtained
    - multiply all the divisor to obtain the LCM 
    */
    
    // Calling the LCm Functions
    int ans = lcm(num1, num2);
    printf("The LCM of %d and %d is %d\n", num1, num2, ans);
    
}

int lcm(int a, int b) {
    // Calculates LCM using iterative approach
    if (a == 0 || b == 0) {
        return 0;
    }
    a, b = abs(a), abs(b);
    int max_num = fmax(a, b);
    
    while (true) {
	if (max_num % a == 0 && max_num % b == 0) {
	    return max_num;
	}
	max_num += 1;
    }
}

