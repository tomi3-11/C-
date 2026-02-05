// Instructions
/*

1. Get User Input
2. Get the size of the input
3. initial an empty array to store the reverse values
4. loop through the input from the last element
5. Add them to the reverse
6. then call the null terminator
7. Display the reverse string


 */
 
#include <stdio.h>
#include <string.h>

int main(){

	// Getting the reverse of a string
	char word[20], rev[20];
	printf("Enter a word: ");
	scanf("%s", word);

	int size = strlen(word);

	for (int i = size; i > 0; --i){
		word[i] = rev[i];
	}
	rev[size] = '\0';

	printf("%s\n", rev);

	//for (int i = 0; i < size; ++i){
	//	printf("%c", rev[i]);
	//}

	return 0;

}
 
