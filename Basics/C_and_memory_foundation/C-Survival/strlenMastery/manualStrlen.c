#include <stdio.h>

int my_strlen(const char *s);

int main(){
	char name[20];
	printf("Enter your name: ");
	scanf("%s", &name);
	
	int size = my_strlen(name);
	printf("Length: %d.\n", size);

	return 0;
}


int my_strlen(const char *s){
	int count = 0;
	while (s[count] != '\0') {
		count ++;
	}
	return count;
}
