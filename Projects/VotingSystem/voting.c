#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

// function prototypes
void insertLast(int arr[], int *n, int val);

int main ()
{
    // Simple Voting System | Count votes using arrays. 
    // get user input
    // store in array
    // display the votes
    
    // char votes[20];

    // char user_input[3];

    // printf("Enter vote: ");
    // scanf("%s", user_input);
    
    // printf("Response Here: ");
    // printf("%s\n", user_input);

    int arr[10] = {23, 24};
    int val = 25;
    int n = 2;

    insertLast(arr, &n, val);

    // printing the array elements
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}


void insertLast(int arr[], int *n, int val){
    // Insert val as the last item in the array
    arr[*n] = val;

    // increase the array size
    (*n)++;

}