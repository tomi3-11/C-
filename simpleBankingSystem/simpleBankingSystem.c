#include <stdio.h>
#include <string.h>

struct BankAccount {
    char fname[20];
    char lname[20];
    int accountNumber;
    int accountBalance;
};

struct Bank {
    struct BankAccount process_account;
};

int createAccount(char fName[20], char lName[20]) {
    // Creating user account
    // Creating a struct variable.
    struct BankAccount create_account;

    // Creating user details for the new account
    strcpy(create_account.fname, fName);
    strcpy(create_account.lname, lName);
    create_account.accountNumber = 12345;

    printf("The first name of the account holder is %s\n", create_account.fname);
    printf("The last name of the account holder is %s\n", create_account.lname);
    printf("The account number for %s %s is %d\n", create_account.fname, create_account.lname, create_account.accountNumber);
    //printf("The account balance for %s %s is %d\n", account.fname, account.lname, account.accountBalance);

    return 0;
}


int main() {
    // | 20   | Simple Banking System (CLI) | Deposit, withdraw, check balance (using functions and structures). |
    /*
    In bankAccount:
        the user creates an account with:(Basic details for Now)
            first Name
            Last Name
        then the program create an account Number.
        Functions to be used here:
        {
            "Create Account",
            "Display account details",
            "Print my details"
        }

    In Bank:
        the Bank automates the user processes:
            Allows user to transact from one account to another
            Allows users to deposit.
            Allows users to withdraw.
            Allows users to check balance.
        Functions to be used here:
        {
            "Transaction",
            "Deposit",
            "Withdraw",
            "Check_balance"
        }
    */

    struct BankAccount account;

    // Getting user details 
    printf("Enter first Name: ");
    scanf("%s", account.fname);
    printf("Enter last Name: ");
    scanf("%s", account.lname);


    createAccount(account.fname, account.lname);
    //strcpy(account.fname, "Tom");
    //strcpy(account.lname, "Joe");
    //account.accountNumber = 12345;
    //account.accountBalance = 20000;




}