//Write a program to print 1-10 using a for loop, a while loop, and do while loop.

#include<stdio.h>
int main(){

     printf("For Loop :::\n");
    int i;
     for(i=1;i<=10;i++){
        printf("%2d.\n",i);
     }


     printf("While Loop :::\n");


    int j=1;

     while(j<=10){

        printf("%2d.\n",j);
         j++;

     }

     printf("Do While Loop :::\n");

      int k=1;
      do{
        printf("%2d.\n",k);
        k++;
      }
      while(k<=10);



return 0;
}
