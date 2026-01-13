#include <stdio.h>

int main() {
    // Finding the first 20 fibonacci numbers
    int prev1 = 0;
    int prev2 = 1;
    
    printf("%d\n", prev1);
    printf("%d\n", prev2);

    for (int i = 0; i < 19; i++){
	int newFibo = prev1 + prev2;
	printf("%d\n", newFibo);

	prev2 = prev1;
	prev1 = newFibo;

    }

    return 0;


}
