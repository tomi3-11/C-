#include <stdio.c>

int main() {
    // Finding the first 20 fibonacci numbers
    int prev1 = 0;
    int prev2 = 1;
    
    printf("%d", prev0);
    printf("%d", prev1);

    for (int i = 0; i < 19; i++){
	int newFibo = prev0 + prev1;
	printf("%d", newFibo);

	prev2 = prev1;
	prev1 = newFibo;

    }

    return 0;


}
