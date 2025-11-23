#include <stdio.h>

int main() {
    // Initializing variable
    int num;
    // Getting user inputs
    printf("Enter a number: ");
    scanf("%d", &num);

    // looping through 12 natural numbers to get their multiples
    for (int i; i < 12; i++) {
        // displaying the multiples 
        printf("%d X %d = %d\n", num, i+1, (i+1) * num);
    }
    return 0;
}