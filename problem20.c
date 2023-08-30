//Write a program to find the maximum between three numbers.
#include<stdio.h>
int main()
    {
  int num1,num2,num3;
  printf("Enter number1 & number2 & number3::");
  scanf("%d %d %d",&num1,&num2,&num3);
  if(num1>num2 || num2>num1 && num3>num1 || num3>num2){
   printf("%d is Maximum Number.");
   return 0;
    }
    }
