#include <stdio.h>

int main(){
    char name[20];
    printf("Enter a name: ");
    // Capture user inputs
    scanf("%s", name);

    // displays the name with a greeting
    printf("Hello, %s\n", name);
}
