//Write a program that converts Centigrade to Fahrenheit
#include<stdio.h>
int main(){

    double c,f;
    printf("Enter The Centigrade Temperature::");
    scanf("%lf",&c);
    f=(c*1.8)+32;
    printf("Farenhite Temperature is::%lf",f);

return 0;
}
