/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  int distance=0;
  float rate=0;

  printf("\nInput distance traveled by the van : ");
  scanf("%d",&distance);

  if(distance<=30)
  {
    rate=distance*50;

  }
  else
  {
    rate=1500+40*(distance-30);
  }

  printf("\nAmount that needed to pay : %.2f",rate);
  
  return 0;
}
