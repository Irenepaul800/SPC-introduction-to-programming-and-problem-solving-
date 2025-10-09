/*
Name: Irene Mwethya Paul 
Reg no: CT101/G/26535/25
Date:8 October 2025
Description:C program for bank ATM using do while loop
*/

#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Current balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Account balance is zero or negative. No more withdrawals allowed.\n");
        }
    }

    return 0;
}