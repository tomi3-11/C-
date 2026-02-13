#include <stdio.h>

int main(){
        int a = 0;
        char b = 'x';

        // void pointer holds address of int 'a'
        void* p = &a;

        printf("Memory Address of a: %p\n", p);

        // void pointer holds address of char 'b'
        p = &b;

        printf("Memory Address of b: %p\n", p);
}
