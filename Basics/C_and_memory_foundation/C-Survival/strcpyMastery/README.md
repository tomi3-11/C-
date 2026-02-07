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

**Explanation**: This program has 2 variables `s1` and `s2`, `s1` is the source, and `s2` is the destination, i.e where it will bw copied.


### Risk of Buffer Overflow
> Def: *Buffer*-> Is a temporary memory that smooths out difference in speed, timing, or structure btn parts of a system.

Review the code below to understand buffer overflow with the `strcpy` function.
```c
#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello! Welcome to Wotoro Tech";

    // Small buffer
    char s2[5];

    // Some other array
    char name[10] = "Rahul";

    // Copying string using strcpy (unsafe)
    // Unsafe: will cause buffer overflow which may overwrite the name

    strcpy(s2, s1);

    printf("Dest: %s\n", s2);
    printf("Name: %s\n", name);

    return 0;

}
```

**Explanation**: The size of the buffer s2 in which we are copying into is less than the source `s1`, it copies well using the `strcpy` function well but ends up overiding the data of the next declaration i.e `char name[10];`.

### Safe Alternative: strncpy
To avoid buffer overflow, consider using `strncpy`, which allows you to specify the maximum number of characters to copy, thus preventing overflow.

```c
strncpy(dest, stc, sizeof(dest) - 1);
dest[sizeof(dest) - 1] = '\0'; 
```

### Explanation:

- strcpy is used to copy a string from one location to another in C.
- It is simple but lacks bounds checking, which can lead to buffer overflow.
- Always ensure the destination array has enough space or consider using strncpy for safer string copying.
