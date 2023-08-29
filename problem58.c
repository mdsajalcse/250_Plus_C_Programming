//Write a program to print even numbers up to N.
#include<stdio.h>
 int main(){

     int i, number;
     printf("Enter Even Numbers Up to N::");
     scanf("%d",&number);

     printf("Even Numbers from 1 to %d::\n",number);

     for(i=2;i<=number;i+=2){
        printf("%d\n",i);
     }



 return 0;
 }
