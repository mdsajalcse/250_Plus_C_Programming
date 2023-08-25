//Write a program to check whether the triangle is an equilateral, isosceles, or scalene triangle

#include<stdio.h>
int main(){
     int side1,side2,side3;
     printf("input three angles of triangle ::");
     scanf("%d %d %d",&side1,&side2,&side3);

     if(side1==side2 && side2==side3){
        printf("It is Equilateral");
     }
      if((side1==side2) || (side2==side3) || (side3==side1)){
        printf("It is isosceles");
      }
     else{
          printf("It is scalene");
     }
return 0;
}
