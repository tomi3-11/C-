#include <stdio.h>

// temperature conversion program

// Prototype
int celsius_to_fahrenheit(double temp);
int fahrenheit_to_celsius(double temp);


// Main function
int main() {
    double temp, result;
    int choice;
    
    printf("=== Temperature Conversion App. ===\n");

    do { 
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celcius\n");
        printf("3. Exit\n");
        printf("Enter a choice: \n");
        scanf("%d",&choice);

        if (choice == 3) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Enter temperature: ");
            scanf("%lf", &temp);
        }
        

        if (choice == 1) {
            // call the function.
            result = celsius_to_fahrenheit(temp);
            printf("%.5fC = %.5fF\n", temp, result);
        } else if (choice == 2) {
            // call the function.
            result = fahrenheit_to_celsius(temp);
            printf("%.5f °F = %.5f °C\n", temp, result);
        } else {      
            printf("Invalid input!");
        }
    } while (choice != 3);
    

    return 0;
}


// celcius to fahrenheit
int celsius_to_fahrenheit(double temp) {
    // formula: (temp * 9/5) + 32
    return (temp * (9.0/5.0)) + 32;
}

int fahrenheit_to_celsius(double temp) {
    // formula: (temp - 32) * 5/9
    return (temp - 32) * 5.0/9.0;
}