#include <stdio.h>

int main() {
    // | 20   | Simple Banking System (CLI) | Deposit, withdraw, check balance (using functions and structures). |

    struct bankAccount {
        char fname[20];
        char lname[20];
        int accountNumber;
        int accountBalance;
    }

    Struct bankAccount account;

    account.fname = "Tom";
    account.lname = "Joe";
    account.accountNumber = 12345;
    account.accountBalance = 20000;

}