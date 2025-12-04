#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
    printf("Account Created successfully!!!\n");


    return 0;
}

// withdraw FUNCTION for the BankAccount structure
int withDraw(int amount) {
    // with draw from the account.
    struct Bank withdraw;

    // int withdraw.process_account.accountBalance = withdraw.Bank.accountBalance;


    // Deduct it from the account balance
    withdraw.process_account.accountBalance -= amount;

    printf("You withdrew %d from the account current balance is %d\n", amount, withdraw.process_account.accountBalance);
    
}

int deposit(int amount) {
    // Depositing an amount to the bank.
    struct Bank bank;
    
    bank.process_account.accountBalance = 0;


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

    while (true) {

        int choice;

        // The main menu
        printf("Enter the choice:\n");
        printf("1. Register account:\n");
        printf("2. Deposit amount:\n");
        printf("3. Withdraw amount:\n");
        printf("4. Quit:\n");

        // Getting the user choice
        printf("Enter user choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Getting user details 
            printf("Enter first Name: ");
            scanf("%s", account.fname);
            printf("Enter last Name: ");
            scanf("%s", account.lname);

            // Call the createAccount function to handle the creation of account process.
            createAccount(account.fname, account.lname);
        } else if (choice == 2) {
            // get the amount to deposit
            printf("Ammount to deposit: ");
            scanf("%d", &account.accountBalance);

            // Call the deposit function to handle the deposit process.
            deposit(account.accountBalance);
        } else if (choice == 3) {
            // get the amount to withdraw
            printf("Ammount to withdraw: ");
            scanf("%d", &account.accountBalance);

            // Call the withdraw function to handle the deposit process.
            withDraw(account.accountBalance);
        } else if (choice == 4) {
            printf("THanks for using this App.\n");
            break;
        }
    }

    
    return 0;  
}