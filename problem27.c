//Write a program to check whether the year is a leap year or not.
#include<stdio.h>
int main(){

   int year;
   printf("Enter Year check whether the year is a leap year or not::");
   scanf("%d",&year);
   if((year%400==0 && year%4==0) || (year%100!=0))
    {

    printf("%d is leap year",year);

   }
   else{

     printf("%d is not leap year",year);

   }

return 0;
}


