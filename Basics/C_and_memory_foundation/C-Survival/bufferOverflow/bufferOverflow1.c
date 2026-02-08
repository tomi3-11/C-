#include <stdio.h>

int main(){
        char buffer[8];
        int x = 42;


        printf("buffer addr: %p\n", buffer);
        printf("x addr:      %p\n", &x);

        return 0;
}
