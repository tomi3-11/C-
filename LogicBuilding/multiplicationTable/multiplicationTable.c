#include <stdio.h>

int main() {
    // A multiplication table for a given number
    int num, i, result;

    printf("Enter a number for the table: ");
    scanf("%d", &num);

    for (i = 1; i < 13; i++){
	result = num * i;
	printf("%d x %d = %d\n", num, i, result);
    }

    return 0;

}
