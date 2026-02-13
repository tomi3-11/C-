#include <stdio.h>

int main() {
    // Defining and initializations
    int a;
    float c;
    double e;
    char b;
    void* d;
    
    // Getting the size of the above data types
    int a_size = sizeof(a);
    int b_size = sizeof(b);
    int c_size = sizeof(c);
    int d_size = sizeof(d);
    int e_size = sizeof(e);

    // Displaying the sizes
    printf("Integer size: %d\n", a_size);
    printf("Float size: %d\n", c_size);
    printf("Double size: %d\n", e_size);
    printf("Char size: %d\n", b_size);
    printf("Void pointer size: %d\n", d_size);

    return 0;
}
