/*
name: Irene Mwethya paul 
reg:CT101/G/26535/25
Date:24th September 2025
Description: program to compute Amount and compound interest
   A= P(1+(r/n))^(n*t)
   CI= A-P
*/
#include<stdio.h>

int main(){
 float A,P,t,r,CI;
   int n =4; //compounded quarterly 
   
   printf("enter principle_amount : Ksh");
   scanf("%f",& P );
   
   printf("\nenter rate (R): ");
   scanf("%f",& r);
   
   printf("\n enter time :in years ");
   scanf("%f",& t);
   
   //compute Amount and compound interest 
    r=r/100;
    A=P*pow (1+(r/n),(n*t));
    CI= A - P;
  
    printf("The amount is Ksh : %.2f" , A );
    printf(" \n The compound interest is : %2 f", CI);
    
    return 0 ;
    }