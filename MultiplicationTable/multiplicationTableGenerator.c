#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i; i < 12; i++) {
        printf("%d X %d = %d\n", num, i+1, (i+1) * num);
    }
    return 0;
}