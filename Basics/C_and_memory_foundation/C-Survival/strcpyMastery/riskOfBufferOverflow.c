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
