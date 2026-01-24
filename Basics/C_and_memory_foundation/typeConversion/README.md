# Type conversion in C
This is simply a way of converting a variable from one data type to another.

We already discussed about the data types in the previous chapter [Data Types](./DataTypes/README.md)

## Conversions
we can convert integers to floats using 2 ways
- Assignment
- Casting

we can see some examples here
```c
// Type conversion for integers, boolean, floats. More can be added from here
#include <stdio.h>
#include <stdbool.h>

int main() {
        // Type conversion in action using Assignment
        // Initialization of x
        bool x = true;

        // bool to integer
        int y = x;

        // bool to float
        float z = x;

        printf("Display x %d.\n", x);
        printf("Display y %d.\n", y);
        printf("Display z %f.\n", z);

}
``
