//Write a Program to enter P, T, and R and calculate compound interest.
#include<stdio.h>
int main(){
  double principle, times, rate, compound_interest;

  printf("Enter Principles Times & Rate::");
  scanf("%lf %lf %lf",&principle,&times,&rate);

  compound_interest=principle*(pow((1+rate/100),times));

  printf("Compund Interest is:::%lf",compound_interest);


return 0;
}
