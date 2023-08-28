//56.	Write a program to Calculate the Sum of 1 to 10 numbers
//using a  for loop, while loop, and do while loop.
#include<stdio.h>
int main(){

     int i=1 ,j=1,k=1,for_Loop_sum=0,while_Loop_sum=0,do_while_Loop_sum=0;

     //For loop
     printf("=======================\n");
     printf("For Loop....\n");
     printf("=======================\n");

     for(;i<=10;i++){
        for_Loop_sum+=i;
        printf("%d\n",i);
     }
     printf("For Loop Sum: %d\n",for_Loop_sum);

     //while loop
     printf("=======================\n");
     printf("While Loop....\n");
     printf("=======================\n");
     while(j<=10){
         printf("%d\n",j);
         while_Loop_sum+=j;
         j++;
     }
     printf("Sum of While Loop::%d\n",while_Loop_sum);

      //do While loop
      printf("=======================\n");
      printf("Do While Loop::\n");
      printf("=======================\n");
    do{
             printf("%d\n",k);

           do_while_Loop_sum+=k++;
    }
    while(k<=10);

    printf("Sum Of Do While Loop::%d\n",do_while_Loop_sum,k);




return 0;

}
