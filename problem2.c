//2.Write a program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter First Digit::\n");
    scanf("%d",&a);
    printf("Enter Second Digit::\n");
    scanf("%d",&b);
    c=a+b;
    printf("Arithmetic sum is::%d\n",c);
    c=a-b;
    printf("Arithmetic Sub is::%d\n",c);
    c=a%b;
    printf("Arithmetic Modulas is::%d\n",c);
    c=a/b;
    printf("Arithmetic Divison is::%d\n",c);

return 0;
}
