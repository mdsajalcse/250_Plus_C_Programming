//Write a program to print odd numbers up to N.
#include<stdio.h>
 int main(){

     int i, number;
     printf("Enter ODD Numbers Up to N::");
     scanf("%d",&number);

     printf("ODD Numbers from 1 to %d::\n",number);

     for(i=1;i<=number;i+=2){
        printf("%d\n",i);
     }



 return 0;
 }
