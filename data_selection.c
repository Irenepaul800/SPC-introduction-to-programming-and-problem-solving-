/*
Name : Irene Mwethya Paul 
reg no: CT101/G/26535/25
Date: 30 September 2025
Description:c program for data selection 
*/
 
#include<stdio.h>
int main (){
  int choice ;
// Dispay menu 
   printf("select data buddles:\n");
   printf("1.100MB @50 KES \n");
   printf("2.500MB @ 200 KES \n");
   printf("3.1GB @ 350 KES \n");
   printf("4.2GB @ 600 KES \n");
   
   //prompt user for input 
   printf("enter your choice (1-4):");
   scanf("%d",& choice);
   
   //switch statement to handle selection 
  switch(choice) {
   case 1:
      printf("You selected 100 MB. Cost=50 KES\n ");
   break;
   
   case 2:
      printf("You selected 500 MB.Cost= 200 KES \n ");
   break;
   
   case 3:
      printf("You selected 1GB.Cost= 350 KES \n ");
   break;
   
   case 4:
      printf("You selected 2GB.Cost=600 KES \n ");
   break;   
   
   default:
       printf("invalid choice");
   break;
   }
   return 0;
   }
   