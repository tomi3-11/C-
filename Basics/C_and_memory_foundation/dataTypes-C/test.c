#include <stdio.h>

int main(){
	// Data types in C
	int number = 6; // This is an integer
	float pi = 3.14; // This is a float
	char letter = 'a'; // This is a character
	double balance = 0.000053; // This is a double 
	

	// Getting their sizes
	int integer_size = sizeof(number);

	printf("The size of an integer is %d.\n", integer_size);
}
