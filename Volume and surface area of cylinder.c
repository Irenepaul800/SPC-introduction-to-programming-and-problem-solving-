/*
Name: Irene Mwethya paul 
Reg No:CT101/G/26535/25
Date:20 September 2025
Description: program to compute volume and surface _ area of cylinder
    volume=πr^2h;
    surface _ area=2πr^2 +2πrh ;
*/

#include <stdio.h>;

 #define PI 3.14159

int main() 
   {
  float r ,h, volume , surface_area;
   //prompt user to enter radius and height of the cylinder 
     
     float radius;
     printf("enter radius (r) of the cylinder in centimeters :\n");
     scanf("%f",& radius);
     
     float height ;
     printf("\n enter height (h) of the cylinder in centimeters \n :");
     scanf("%f",& height);
     
   // compute volume and surface area of the cylinder 
     
   volume=PI*radius*radius*height ; // πr^2h
    surface_area=2*PI* radius*radius + 2*PI *radius*height ;//2πr^2 +2πrh
    
    //display results 
    
    printf("\n volume is: %.2f CM³\n ", volume);
    printf("\n surface_area is: %.2f CM²\n", surface_area);
    
      return 0;
     }
    
