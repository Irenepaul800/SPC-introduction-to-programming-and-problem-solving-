/*
Name: Irene Mwethya Paul 
reg no: CT101/G/26535/25
Date:3 November 2025
Description: c program to create examination results file
*/

#include<stdio.h>
#include <string.h>

// Define student structure
struct Student {
    char name[50];
    char regno[20];
    int marks;
};

int main() {
    FILE *file;
    struct Student s;
    char choice;

    // Open file in write binary mode ("wb")
    
    file = fopen("results.dat", "wb");

    if (file == NULL) {
        printf("Error: Cannot create results.dat\n");
        return 1;
    }
    printf("----bachelor of science in computer science ----\n\n");
    printf ("***end of year examination results*** \n\n");
    printf(" Enter student details (type 'n' to stop)\n\n");

    while (1) {
        printf("Enter student name: ");
        scanf(" %[^\n]", s.name);

        printf("Enter registration number: ");
        scanf(" %[^\n]", s.regno);

        printf("Enter total marks: ");
        scanf("%d", &s.marks);

        // Write this student record to the file
        fwrite(&s, sizeof(s), 1, file);
        printf("Student saved successfully!\n");

        // Ask if user wants to add another student
        printf("Add another student? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    fclose(file);  // Close the file
    printf("\n✅ All student details saved in results.dat\n");

    return 0;
}