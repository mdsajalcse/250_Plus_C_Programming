//Write a program to check whether a number is divisible by 5 or 11 or not
#include<stdio.h>
int main(){

      int number;
      printf("Enter a number is divisible by 5 or 11 or not ");
      scanf("%d",&number);
      if(number%5==0 && number%11==0){
        printf("number is divisible by 5 or 11");
      }
      else{
        printf("is not divisible by 5 or 11");
      }

return 0;
}

