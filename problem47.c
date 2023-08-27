//Write a program to find the maximum between two numbers using a switch case.//
#include<stdio.h>
int main(){
    int number1,number2;
    for(;;){
    printf("Enter Two Numbers...\n");
    scanf("%d %d",&number1,&number2);
    switch(number1>number2){
 case 0:
    printf("%d is maximum\n",number2);
    break;

 case 1:
    printf("%d is maximum\n",number1);
    break;

    }
    }
return 0;
}
