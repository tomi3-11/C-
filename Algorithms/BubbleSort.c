#include <stdio.h>
#include <stdbool.h>


int main(){
    int arr[] = {4, 2, 6, 3, 9, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    bool swapped = false;

    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
    }
    if (!swapped){
        return 0;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
