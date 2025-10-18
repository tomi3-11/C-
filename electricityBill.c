#include <stdio.h>
#include <stdlib.h>

#define True 1
#define False 0
#define success 0
#define failure -1

// Function prototypes
double total_energy(double power, double hours, double days);
double power(double work, double time);


int main() {
    // Main function 
}

double total_energy(double power, double hours, double days) {
    // Calculates the total energy consumed by a room-mate
    // kWh = (Watts × Hours × Days) / 1000
    double result;

    result = (power * hours * days) / 1000;
}

double power(double work, double time) {
    // Calculates the power
}