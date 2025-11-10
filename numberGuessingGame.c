#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// #define True 1
// #define False 0

int main() {
    // Initializing project variables
    int num, guess;

    // Highest Number
    int N = 100;

    srand((unsigned int)time(NULL));

    guess = rand() % (N + 1);

    while (true) {
        // Taking user inputs
        printf("Enter a number to guess: ");
        scanf("%d", &num);

        if (num == guess) {
            printf("You guessed the number %d right.\n", guess);
            break;
        } else if (num < guess) {
            printf("Too low! try again\n");
        } else if (num > guess) {
            printf("Too high! try again\n");
        }

    } 

    return 0;
}