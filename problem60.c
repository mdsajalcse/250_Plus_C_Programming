//Write a program to find the sum of all natural numbers between 1 to n.

#include<stdio.h>
int main(){

     int number,i,sum=0;
     printf("Enter the N numbers::");
     scanf("%d",&number);
     for(i=1;i<=number;i++){

        sum+=i;
        printf("%d\n",i);



     }
      printf("Sum of All Natural Numbers Between 1 to %d= %d",number,sum);



return 0;
}
