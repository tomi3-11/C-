#include <stdio.h>
#include <string.h>

typedef struct {
    char item[10];
    float price;
    //Link *pnext;
} Link;

int main(){
    printf("LinkedList in C.\n");
    Link l1;
    //l1.item = "Book";
    l1.price = 34.5;

    //printf("Item %s\n", l1.item);
    printf("Price: %f\n", l1.price);
    return 0;
}
