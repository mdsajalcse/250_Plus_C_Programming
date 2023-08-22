//Write a program to check whether a number is even or odd.

#include<stdio.h>
int main()
    {
  int num;
  printf("Enter number:");
  scanf("%d",&num);
  if(num%2==0){
   printf("%d is Even Number.",num);

    }
    else{
        printf("%d is ODD Number.",num);

    }
     return 0;
    }
