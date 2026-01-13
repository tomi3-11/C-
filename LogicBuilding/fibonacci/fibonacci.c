#include <stdio.h>

int main() {
    // Finding the first 20 fibonacci numbers
    int prev1 = 1;
    int prev2 = 0;
    
    printf("%d\n", prev2);
    printf("%d\n", prev1);

    for (int i = 0; i < 18; i++){
	int newFibo = prev1 + prev2;
	printf("%d\n", newFibo);

	prev2 = prev1;
	prev1 = newFibo;

    }

    return 0;


}
