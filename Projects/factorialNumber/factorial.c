#include <stdio.h>

// Function Prototypes
int fac(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n); // prompting the user for a number

    int result = fac(n); // invoking the factorial function
    printf("The factorial of %d is %d.\n", n, result); // Displaying the result
    
}

// Function that handles the factorial of a number
int fac(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fac(num - 1);
    }
}
