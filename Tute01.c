/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float mark1,mark2,avg;

  printf("enter mark 1 : ");
  scanf("%f",&mark1);

  printf("enter mark 2 : ");
  scanf("%f",&mark2);

  printf("%.2f",(mark1 + mark2)/2);


  return 0;
}

