/*
Name: Irene Mwethya Paul 
reg no: CT101/G/26535/25
Date: 23 October 2025
Description:C program to calculate total fare
*/
#include<stdio.h>

// Function to calculate total fare
float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance travelled (in km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));

    return 0;
}