#include <stdio.h>
#include <stdbool.h>

int main() {
    // LCM and GCD
    int num1, num2;

    printf("Num 1:");
    scanf("%d", &num1);
    printf("Num 2:");
    scanf("%d", &num2);

    // get user input
    /*
    - divide every number by a divisor
    - Until 1 is obtained
    - multiply all the divisor to obtain the LCM 
    */

    while (true) {
        int divisor;
        if ( num1 % 2 == 0 && num2 % 2 == 0) {
            divisor = 2;
        } else {
            divisor = 3;
        }

        if ( num1 / divisor == 1 && num2 / divisor == 1) {
              printf("LCM Reached");
              break;
        }
    }
}