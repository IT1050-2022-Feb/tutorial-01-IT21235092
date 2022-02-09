/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mrk1,mrk2,tot=0;
  float avg=0;

  printf("\nEnter the marks of Subject 01 : ");
  scanf("%d",&mrk1);

  printf("\nEnter the marks of Subject 02 : ");
  scanf("%d",&mrk2);

  tot=mrk1+mrk2;
  avg=tot/2.0;

  printf("\nAverage : %.2f",avg);
  
  return 0;
}

