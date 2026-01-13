#include <stdio.h>
#include <string.h>

// function prototypes
char reverse(char rev[], char word[]);


int main() {
    // Palindrome Checker | Check if a string or number reads the same backward.
    char word[200], rev[200];

    printf("Enter a word: ");
    scanf("%s", word);

    reverse(rev, word);


    if (strcmp(rev, word) == 0) {
        printf("It is palindrome\n");
    } else {
        printf("It is not a palindrome\n");
    }

    return 0;
}

char reverse(char rev[], char word[]) {
    // getting the length of the word
    int size = strlen(word);

    // looping through the word to reverse it
    for (int i = 0; i < size; i++) {
        rev[i] = word[size - i - 1];
    }
    rev[size] = '\0';

    printf("%s\n", rev);
}