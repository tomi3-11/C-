#include <stdio.h>
#include <string.h>

int main(){
        char src[] = "Hello, World!";
        char dest[50]; // Ensure enough space for the copied string
        strcpy(dest, src); // copy src into dest

        printf("Source: %s\n", src);
        printf("Destination: %s\n", dest);

        return 0;
}
