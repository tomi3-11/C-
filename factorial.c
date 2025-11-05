#include <stdio.h>

// Function Prototypes
int fac(int num);

int main() {
    int n = 5;

    fac(n);

}

int fac(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fac(num - 1);
    }
}