/*Write a program to read four values a, b, c, and d from the terminal
and evaluate the value of (a+b) to (c-d), and print the result,
if c-d is not equal to zero.

*/
#include<stdio.h>
int main(){
     double a,b,c,d,value;

     printf("Enter the value of A , B , C & D::");
     scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

     if(c-d==0){
        printf("Sorry! c-d is not equal to zero..");
     }
     else{

         value=(a+b)/(c-d);
         printf("The Value is::%.3lf",value);
     }





return 0;
}
