#include <stdio.h>

void linearSearch(int arr[], int value){
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i ++){
        if (value == arr[i]){
            printf("Found %d\n", arr[i]);
            return;
        }
    }
    printf("Not found.\n");
}

int main(void) {

    int arr[5] = {2, 4, 6, 7, 8};
    int value = 7;
    linearSearch(arr, value);
    return 0;
}
