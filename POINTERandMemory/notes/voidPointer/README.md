# Void Pointers in C
A void pointer is a pointer that has no associated data type with it. A void pointer can hold an address of any type and can be typecasted to any type.

## Example of void Pointer in c
```c
#include <stdio.h>

int main(){
	int a = 0;
	char b = 'x';

	// void pointer holds address of int 'a'
	void* p = &a;

	printf("Memory Address of a: %d\n", p);

	// void pointer holds address of char 'b'
	p = &b;

	printf("Memory Address of b: %d\n", p);
```
