#include <stdio.h>

int main(){
    // checking whether positive or negativ
    int num;
    
    // getting user inputs
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 1) {
	printf("The number %d is negative.\n", num);    
    } else if ( num > 1) {
	printf("The number %d is positive.\n", num);
    } else {
	printf("Invalid input.");
    }

    return 0;
}
