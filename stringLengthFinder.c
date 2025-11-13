#include <stdio.h>
#include <string.h>


// Function prototypes 
int findLen(char* s);

int main() 
{
    // String Length Finder: Count string length without using `strlen()`.
    char s[] = "Hello";

    printf("The length of the string is %d\n", findLen(s));

    return 0;
}


int findLen(char* s) {
    int l = 0;

    // counting each charater from start.
    while (s[l]) l++;

    return l;
}
