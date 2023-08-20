//Write a program that converts Fahrenheit to Centigrade
#include<stdio.h>
int main(){

    double c,f;
    printf("Enter The Farenhite Temperature::");
    scanf("%lf",&f);

    c=(f-32)/1.8;

    printf("Celcius Temperature is::%lf",c);

return 0;
}

