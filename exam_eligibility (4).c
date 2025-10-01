/* 
 Name: Irene Mwethya Paul 
 Reg No: CT101/G/26535/25
 Date: 30 September 2025
 Description: C program for exam eligibility with reasons 
*/

#include <stdio.h>

int main() {
    printf("KIRINYAGA UNIVERSITY  EXAM ELIGIBILITY SYSTEM\n\n");

    int class_attendance, average_marks;

    printf("Enter class attendance percentage: ");
    scanf("%d", &class_attendance);
    
if(class_attendance<0||class_attendance>100){
    printf("invalid choice");
    return 0;
    }
    
    printf("Enter average_marks: ");
    scanf("%d", &average_marks);
    
    if(average_marks<0 || average_marks>100 ) {
      printf("invalid choice");
  return 0 ;
  }
     
    if (class_attendance >= 75 && average_marks >= 40) {
        printf("\nEligible for exams\n");
    } else {
        printf("\nNot eligible for exams\n");

        // give reason
        if (class_attendance < 75) {
            printf("class_attendance is below the required 75%%\n");
        }
        if (average_marks < 40) {
            printf(" average_marks are below the required 40\n");
         }   
  }          
    return 0;
}