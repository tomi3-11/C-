# Using the `strcpy` in C

In C, `strcpy()` is a built-in function used to copy one string into another. It is a part of the C standard strings library.

- The strcpy function in C is used to copy a string, with syntax: `strcpy(dest, src);`, where dest is the destination array and src is the source string.
- It returns a pointer to the dest string after copying the content from src.

```c

// Here is the full implementation, copy and use it to see how it runs

#include <stdio.h>
#include <string.h>

int main(){
    char s1[];

    printf("Enter a phrase to copy: ");
    scanf("%s", s1);

    // Ensure that destination has enough space to hold the source phrase
    char s2[99];

    // Copying the string using strcpy
    strcpy(s2, s1);

    printf("Source: %s.\n", s1);
    printf("Destination: %s.\n", s2);


}
```

**Explanation**: The function take
