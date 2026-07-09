#include <stdio.h>

int main(){
    printf("Enter your name: ");
    // get a variable to store the user name.
    char name[20];
    // Captures users inputs, NOTE: 'stdin' mean standard input
    // Make sure to match the array size which is 20
    fgets(name, 20, stdin);

    // Display a greeting for the user
    printf("Hello, %s\n", name);

    return 0;
}
