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
