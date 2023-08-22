//	Write a program to enter any number and calculate its square root.

#include<stdio.h>
int main(){

    double num,result;
    printf("Enter The any Number to find Square Root::");
    scanf("%lf",&num);

    result=sqrt(num);

    printf("The Root of Number::%.3lf\n",result);






return 0;
}
