/* 
 Name: Irene Mwethya Paul 
 Reg No: CT101/G/26535/25
 Date: 30 September 2025
 Description: C program to compute water bills 
*/

#include <stdio.h>

int main() {
   printf("ATHI RIVER PROJECT WATER BILLS\n\n");
    int water_units, charges, total_bill;

    printf("Enter the number of water units: "); 
    scanf("%d", &water_units);    

    if (water_units >= 0 && water_units <= 30) {
        charges = 20;   // Ksh 20 per unit
    } 
    else if (water_units >= 31 && water_units <= 60) {
        charges = 25;   // Ksh 25 per unit
    } 
    else if (water_units > 60) {
        charges = 30;   // Ksh 30 per unit
    } 
    else {
        printf("Invalid input! Units cannot be negative.\n");
        
    }

    // calculate total bill
    total_bill = water_units * charges;

    // display results 
    printf("The total bill is Ksh. %d\n", total_bill);

    return 0;
}