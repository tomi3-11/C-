#include <stdio.h>
#include <string.h>

struct bankAccount {
    char fname[20];
    char lname[20];
    int accountNumber;
    int accountBalance;
};


int main() {
    // | 20   | Simple Banking System (CLI) | Deposit, withdraw, check balance (using functions and structures). |

    struct bankAccount account;

    strcpy(account.fname, "Tom");
    strcpy(account.lname, "Joe");
    account.accountNumber = 12345;
    account.accountBalance = 20000;

    printf("The first name of the account holder is %s", account.fname);
    printf("The last name of the account holder is %s", account.lname);
    printf("The account number for %s %s is %d", account.fname, account.lname, account.accountNumber);
    printf("The account balance for %s %s is %d", account.fname, account.lname, account.accountBalance);



}