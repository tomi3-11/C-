# Seeing memory
Here we are going to work on only seeing memory nothing else

Lets look at the code below
```c
#include <stdio.h>

int main(){
        int x = 42;
        printf("x value: %d\n", x);
        printf("x address: %p\n", (void*)&x);
}
```

## Details
1. Header files
```c
#include <stdio.h>

```
These header file help in input and output

2. getting the memory address
```c
printf("x address: %p\n", (void*)&x);
```
This line prints the memmory address of the variable `x`.
