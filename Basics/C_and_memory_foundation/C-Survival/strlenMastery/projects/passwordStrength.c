#include <stdio.h>
#include <string.h>

int main(){
	char word[20];
	// Getting their password
	printf("Enter a password: ");
	scanf("%s", &word);

	int size = strlen(word);

	if (size < 8){
		printf("PassWord is weak\n");
	}else{
		printf("Password is kinder strong.\n");
	}

	return 0;

}
