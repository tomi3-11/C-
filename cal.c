#include <stdio.h>

// Function prototypes for each operation to be performed
int addition(int num1, int num2); // Function prototype for addition
int subtraction(int num1, int num2); // Function prototype for subtraction
int multiplication(int num1, int num2); // Function prototype for multiplication
float division(int num1, int num2); // Function prototype for division

// All function stated above are defined below the main function(bottom of the code)

// Main function
int main(void)
{
    int num1, num2, operation; // Declaring variables to store the numbers and operation
    double result; // Declaring a variable to store the result
    char continueChoice; // Declaring a variable to store the user's choice to continue or not

    
    do  // A do while loop to allow the user to perform multiple operations
    {
        do  // A do while loop to ensure the user enters a valid operation
        {
            // Prompting the user for the numbers and operations to perform
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);
            printf("Enter the operation to perform: \n(1.Add 2.Subtract 3.Multiply 4.Divide)\n");
            scanf("%d", &operation);
        }
        
        while (operation < 1 || operation > 4); // Ensuring the user enters a valid operation
        
        // Checking the operation to perform
        if (operation == 1)
        {
            result = addition(num1, num2);
            printf("%d + %d = %f\n", num1, num2, result);
        }
        else if (operation == 2)
        {
            result = subtraction(num1, num2);
            printf("%d - %d = %f\n", num1, num2, result);
        }
        else if (operation == 3)
        {
            result = multiplication(num1, num2);
            printf("%d * %d = %f\n", num1, num2, result);
        }
        else if (operation == 4)
        {
            if (num2 == 0)
            {
                printf("Cannot divide by zero\n");
                return 1;
            }
            else
            {
                result = division(num1, num2);
                printf("%d / %d = %f\n", num1, num2, result);
            }
            
        }
        else
        {
            printf("Invalid Operation\n");
        }

        // Prompting the user to continue or not
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'y' || continueChoice == 'Y'); // Looping if the user enters 'y' or 'Y'
    return 0;   
}








// Function Definitions for each operation to be performed

// Function to add the two numbers
int addition(int num1, int num2)
{
    int sum; // Declaring a variable to store the result
    sum = num1 + num2;
    return sum; // Returning the result
}

// Function to subtract the two numbers
int subtraction(int num1, int num2)
{
    int difference; // Declaring a variable to store the result
    difference = num1 - num2;
    return difference; // Returning the result
}

// Function to multiply the two numbers
int multiplication(int num1, int num2)
{
    int product; // Declaring a variable to store the result
    product = num1 * num2; 
    return product; // Returning the result
}

// Function to divide the two numbers
float division(int num1, int num2) 
{
    float quotient; // Declaring a float variable to store the result
    quotient = (float)num1 / num2; // Casting the results to float.
    return quotient; // Returnin the result
}