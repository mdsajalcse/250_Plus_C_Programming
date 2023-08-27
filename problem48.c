//Write a program to check whether a number is even or odd using a switch case.

#include<stdio.h>
int main(){

    int number;
    printf("Enter Any Number::");
    scanf("%d",&number);
    switch(number%2==0){

    case 0:
        printf("%d is ODD..\n",number);
        break;
    case 1:
        printf("%d is Even..\n",number);
        break;

    }


return 0;
}
