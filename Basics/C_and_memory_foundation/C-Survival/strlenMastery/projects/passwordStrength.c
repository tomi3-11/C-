#include <stdio.h>

int StrLen(char *word){
    int count = 0;
    
    while (word[count] != '\0'){
        count ++;
    }
    return count;
}

int main() {
    // A program the checks for password strength.
    char word[20];
    printf("Enter your password: ");
    scanf("%s", word);
    
    if (StrLen(word) < 8){
        printf("Your password is week and short.");
    } else if (8 <= StrLen(word) <= 15) {
        printf("Your password is medium but needs strengthening for better security.");
    } else if (StrLen(word) > 15) {
        printf("Mate your password is strong enough, Aura");
    } else {
        printf("You better enter a strong password.");
    }
    
    // int size = StrLen(word);
    // printf("The size is %d\n", size);

    return 0;
}
