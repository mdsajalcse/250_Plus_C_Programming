//Write a program to find all roots of a quadratic equation.


#include<stdio.h>
#include<math.h>
int main(){

    double a,b,c,d,r1,r2;
    printf("Enter A,B,C=");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);

    printf("R1 is::%.2lf\n",r1);
    printf("R2 is::%.2lf",r2);

return 0;
}
