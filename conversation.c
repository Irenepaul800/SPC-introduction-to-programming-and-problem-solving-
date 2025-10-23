/*
Name: Irene Mwethya Paul 
reg no: CT101/G/26535/25
Date: 23 October 2025
Description: C program to convert Fahrenheit to Celsius 
*/
#include<stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}