# User defined Data types
Data types are types of data that can be stored in memory using a programming language.

They can be classified into:
- Primitive
- Derived
- User Defined

Lets talk about user defined data types
- Struct
- Enums
- Unions

These are data types defined by the user they are derived from existing datatypes.

Lets see them in action now


```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
};

int main(){

    // Struct in c
    struct Student s1 = {"Tom", 12};
    
    // Displaying contents of the structure
    printf("Name %s.\n", s1.name);
    printf("Age %d.\n", s1.age);

}
```
