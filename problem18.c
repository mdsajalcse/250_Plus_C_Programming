// Write a program to calculate a bike’s total consumption from the given total distance
//(integer value) traveled (in km) and spent fuel
//(in liters, float number – 2 decimal points.

#include<stdio.h>
int main()
    {

   float total_cost;
   int distance, spent_fuel;

   printf("Enter Total Distance Traveled::");
   scanf("%d",&distance);
   printf("Enter Spent Fuel::");
   scanf("%d",&spent_fuel);

   total_cost=distance/spent_fuel;

   printf("Agerage Consumption::%.2f",total_cost);

   return 0;

    }
