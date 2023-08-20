//	Write a Program to enter P, T, and R and calculate simple interest.

#include<stdio.h>
int main(){

    double p,t,r,si;
    printf("Enter P T R ");
    scanf("%lf %lf %lf",&p,&t,&r);
    si=(p*t*r)/100;
    printf("The Simple Interest ::%lf",si);




return 0;
}
