//Write a program to find the sum of all even numbers between 1 to n.
#include<stdio.h>
int main(){

    int i,number,sum=0;
    printf("Enter Any Number to find the sum of all even numbers between 1 to n=");
    scanf("%d",&number);

    for(i=2;i<=number;i+=2){
        sum+=i;
        printf("%d\n",i);

    }
    printf("sum of all even numbers between 1 to %d= Total Sum %d",number,sum);





return 0;
}




