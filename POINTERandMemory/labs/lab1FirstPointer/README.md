# First Pointer
Here were are printing a pointer and dereferencing them, seeing memory address of variables.

#### Source Code
```c
#include <stdio.h>

int main(){

        int x = 10;
        int *p = &x;

        printf("x: %d\n", x);
        printf("Dereferencing x: %d\n", *p);
        //printf("Pointer of x: %p\n", (void*)p);
        //Trying this without "void* pointers
        printf("Pointer of x: %p\n", p);

}
```
#### Explanations
Initialization of a variable and a pointer, a pointer is defined with `*` and asigned using `&`. i think these basics will help you.
```c
int x = 10;
int *p = &x;
```

Displaying the variable and it's memory address, `(void*)` is a type casting for data type void, converting the pointer to a void type.
```

 printf("x: %d\n", x);
 printf("Dereferencing x: %d\n", *p);
 //printf("Pointer of x: %p\n", (void*)p);

 //Trying this without "void* pointers
 printf("Pointer of x: %p\n", p);
```

Thats all, read more about pointers, they are really important in memory manipulation.
