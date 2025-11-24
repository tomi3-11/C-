#include <stdio.h>
#include <math.h>


int main() {
    // Power of a Number | Implement using recursion. |
    int num, power;

    printf("Base: ");
    scanf("%d", &num);
    printf("index: ");
    scanf("%d", &power);

    int answer = pow(num, power);

    printf("%d", answer);

    /*
    def power(n, pw):

        for i in range(0, n):
            // if n == 0:
            //     return 1
            // elif n == 1:
            //     return n
            // else:
            return pow(pw, i)

    num = input("Enter num: ")
    pwd = input("Enter power: ")
    result = power(pwd, num)
    print(result)
        
        
    
    */
}