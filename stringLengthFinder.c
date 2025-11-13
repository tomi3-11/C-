#include <stdio.h>
#include <string.h>

int main() 
{
    // String Length Finder: Count string length without using `strlen()`.
    char word[] = "Hello";

    int len = strlen(word);

    printf("The length of this word is %d\n", len);
    return 0;
}