//Write a program to find the power of any number x ^ y.
#include<stdio.h>
int main(){

    int base,exp,result;
    printf("Enter The Base Value::");
    scanf("%d",&base);
    printf("Enter The Exponential Value::");
    scanf("%d",&exp);

    result=pow(base,exp);

    printf("The power of Number::%d\n",result);






return 0;
}
