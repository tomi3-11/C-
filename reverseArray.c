#include <stdio.h>
#include <string.h>

// function prototypes
char reverse(char name[], char rev[]);

int main() {
    // Reverse an Array | Practice array traversal and swapping.
    // Initializing required variables.
    char name[100], rev[100];
    
    // getting user inputs
    printf("Enter your name: ");
    scanf("%s", name);

    // Invoking the reverse function
    reverse(name, rev);

    return 0;
}


char reverse(char name[], char rev[]) {
    // Performs string reversal.
    int size = strlen(name); // getting then length of the string.

    for (int i = 0; i < size; i++) {
        rev[i] = name[size - i - 1];  
    }
    rev[size] = '\0';

    printf("Reversed as: %s\n", rev);
}