#include <stdio.h>


int main(){
  int a = 22;
  int *p = &a;

  printf("p = %u\n", p);
  p++;

  printf("p++ = %u\n", p);
}
