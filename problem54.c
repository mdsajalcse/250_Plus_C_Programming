//Write a program to Print your name 20 times using a for loop, while loop, and do while loop.
#include<stdio.h>
int main(){

     printf("For Loop :::\n");
    int i;
     for(i=1;i<=20;i++){
        printf("%2d. Sajal\n",i);
     }


     printf("While Loop :::\n");


     int j;

     while(j<=20){

        printf("%2d. Sajal\n",j);
         j++;

     }

     printf("Do While Loop :::\n");

      int k;
      do{
        printf("%2d. Sajal\n",k);
        k++;
      }
      while(k<=20);



return 0;
}
