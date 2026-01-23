#include <stdio.h>

int main(){
	// Data types in C
	int number = 6; // This is an integer
	float pi = 3.14; // This is a float
	char letter = 'a'; // This is a character
	double balance = 0.000053; // This is a double 
	

	// Getting their sizes
	int integer_size = sizeof(number);
	int float_size = sizeof(pi);
	int char_size = sizeof(letter);
	int double_size = sizeof(balance);
	
	// Displaying the sizes of the data types
	printf("The size of an integer is %d. bytes.\n", integer_size);
	printf("The size of an float is %d. bytes.\n", float_size);
	printf("The size of an char is %d. bytes.\n", char_size);
	printf("The size of an double is %d. bytes.\n", double_size);

	return 0;
}
