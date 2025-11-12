#include <stdio.h>
#include <string.h>

int main() {
    // Reverse an Array | Practice array traversal and swapping.
    // Initializing required variables.
    char name[100], rev[100];
    int i, size;
    
    // getting user inputs
    printf("Enter your name: ");
    scanf("%s", name);

    size = strlen(name); // getting then length of the string.
    // printf("The size of the string is %d\n", size);

    for (i = 0; i < size; i++) {
        rev[i] = name[size - i - 1];  
    }
    rev[size] = '\0';

    printf("Reversed as: %s\n", rev);

    return 0;
}


// char reverse(char string[20]) {
//     // Performs string reversal.
//     char words[] = {};
// }