/*
Name: Irene Mwethya Paul 
reg no: CT101/G/26535/25
Date: 8th October 2025
Description:C program using do while loop 
*/

#include<stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted.\n");

    return 0;
}