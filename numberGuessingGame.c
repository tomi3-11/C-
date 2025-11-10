#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// #define True 1
// #define False 0

int main() {
    // Initializing project variables
    int num, guess;
    // Bookean intialized to false
    bool numberFound = true;
    // Lower number
    int lowerNumber = 0;
    // upper number
    int upperNumber = 100;
    // Generating number to be guessed
    guess = rand() % (upperNumber - lowerNumber + 1) + lowerNumber;

    while (numberFound) {
        // Taking user inputs
        printf("Enter a number to guess: ");
        scanf("%d", &num);

        if (num == guess) {
            printf("You guessed the number %d right.", guess);
            break;
        } else if (num < guess) {
            printf("Too low! try again\n");
        } else if (num > guess) {
            printf("Too high! try again\n");
        }

    } 
    printf("%d \n", guess);





    // for (int i = 0; i < 10; i ++){
    //     int value = rand() % (upperNumber - lowerNumber + 1) + lowerNumber;

    //     printf("%d \n", value);
    // }

    return 0;
}