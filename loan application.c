/* 
Name: Irene Mwethya paul 
Reg:CT101/G/26535/25
Date:23th September 2025
Description: loan application illegibility 
*/
#include<stdio.h>
int main ()
{
int age;
    printf("enter age (in years): "); 
    scanf("%d", &age);
   printf("the age is %d",age);
   
 int annual_income ;
   printf("\nenter_income:Ksh \n");
   scanf("%d",& annual_income);
   printf(" \nthe annual_income is %d", annual_income); 
     
 if( age >= 21& annual_income >=21000){
 printf(" \ncongratulations, you qualify for a loan.");
  } else{
  printf("unfortunately,we are unable to offer you a loan at this time");
  }
  
   return 0;
    
    }