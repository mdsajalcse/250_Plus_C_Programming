//Write a program to input the month number and print the number of days in that month.

#include<stdio.h>
int main(){

     int month_number;
     printf("input the month number ::");
     scanf("%d",&month_number);
     if(month_number==1){
        printf("It's January,Contains 31 Days.");
     }
     else if(month_number==2){
        printf("It's February,Contains 28/29 Days.");
     }
     else if(month_number==3){
         printf("It's March,Contains 31 Days.");
     }
     else if(month_number==4){
        printf("It's April,Contains 30 Days.");
     }
     else if(month_number==5){
        printf("It's May,Contains 31 Days.");
     }
     else if(month_number==6){
         printf("It's June,Contains 30 Days.");
     }
     else if(month_number==7){
         printf("It's July,Contains 31 Days.");
     }
     else if(month_number==8){
         printf("It's August,Contains 31 Days.");
     }
     else if(month_number==9){
         printf("It's September,Contains 30 Days.");
     }
     else if(month_number==10){
         printf("It's October,Contains 31 Days.");
     }
     else if(month_number==11){
         printf("It's November,Contains 30 Days.");
     }
      else if(month_number==12){
         printf("It's December,Contains 31 Days.");
     }
     else{
        printf("Invalid Month Number....");
     }
return 0;
}
