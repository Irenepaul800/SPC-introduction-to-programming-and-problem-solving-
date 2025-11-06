#include <stdio.h>

int main() {
    FILE *file;         // File pointer to access the file
    float amount;       // Variable to store each sale read from file
    float total = 0;    // Variable to accumulate total sales

    // Open the file "sales.txt" in read mode
    file = fopen("sales.txt", "r");

    // Check if file was opened successfully
    if (file == NULL) {
        printf("Error: Cannot open sales.txt\n");
        return 1;  // Exit program with error
    }

    // Read each float from the file until end-of-file
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;  // Add each amount to total
    }

    // Close the file
    fclose(file);

    // Display the total sales with 2 decimal places
    printf("Total sales for the day = %.2f\n", total);

    return 0;  // Successful execution
}