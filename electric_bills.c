/*
Name : Irene Mwethya Paul 
reg no:CT101/G/26535/25
Date:23/10/2025
Description:c program to calculate electric bill
*/

#include<stdio.h>

// Function to calculate electric bill
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    printf("Total bill amount: KSh. %.2f\n", calculateElectricBill(units));

    return 0;
}