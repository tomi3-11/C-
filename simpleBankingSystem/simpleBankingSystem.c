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

// createAccount FUNCTION FOR THE BankAccount structure.
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
    // printf("The account balance for %s %s is %d\n", account.fname, account.lname, account.accountBalance);

    return 0;
}

int deposit(int amount) {
    // Depositing an amount to the bank.
    struct Bank bank;

    // deposit
    bank.process_account.accountBalance += amount;

    printf("You deposited %d into the account current balance is %d\n", amount, bank.process_account.accountBalance);
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
            "Print my details"(Optional for file handling)
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
    printf("Ammoun to deposit: ");
    scanf("%d", &account.accountBalance);


    createAccount(account.fname, account.lname);

    deposit(account.accountBalance);
}