/*
Name: Irene Mwethya Paul 
reg no:CT101/G/26535/25
Date: 8 October 2025
description :c program for guessing game using while loop
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0)); // seed random number generator
    secretNumber = rand() % 20 + 1; // random number between 1 and 20

    printf("Guess the number (between 1 and 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it right.\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}