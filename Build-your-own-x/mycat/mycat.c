#include <stdio.h>

int main(int argc, char *argv[]){
    // initialize the required variables to be used
    FILE *file;
    int ch;

    // Read the contents of the file
    file = fopen(argv[1], "r");

    // display all the characters in the file, repeat until end of file
    while ((ch = fgetc(file)) != EOF){
        putchar(ch);
    }

    // Close the file
    fclose(file);
    return 0;
}
