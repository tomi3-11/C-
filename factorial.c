#include <stdio.h>

// Function Prototypes
int fac(int num);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = fac(n);
    printf("The factorial of %d is %d.\n", n, result);
    
}

int fac(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fac(num - 1);
    }
}
