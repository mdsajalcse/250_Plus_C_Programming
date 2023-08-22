//Write a program to check whether a number is negative, positive, or zero.
#include<stdio.h>
int main()
    {
  int num;
  printf("Enter number::");
  scanf("%d",&num);
  if(num<0){
   printf("Negative");
  }
   else if(num>0){
    printf("Positive");
   }
   else{

     printf("zero");
   }


   return 0;

    }

