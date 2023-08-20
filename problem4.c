//Write a Program to calculate the area of an equilateral triangle.

#include<stdio.h>
int main(){

  double a,area;
  printf("Enter The Side of eqilateral triangle::");
  scanf("%lf",&a);

  area=(1.73*a*a)/4;
  printf("Area of an Eqilateral triangle::%lf",area);

return 0;
}
