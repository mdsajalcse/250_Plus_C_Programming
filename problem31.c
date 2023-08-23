//Write a program to input the week number and print the weekday.

#include<stdio.h>
int main(){

     int week_number;
     printf("Enter the week number and print the weekday ::");
     scanf("%d",&week_number);
     if(week_number==1){
        printf("Saturday");
     }
     else if(week_number==2){
        printf("Sunday");
     }
     else if(week_number==3){
        printf("Monday");
     }
     else if(week_number==4){
        printf("tuesday");
     }
     else if(week_number==5){
        printf("Wednesday");
     }
     else if(week_number==6){
        printf("thursday");
     }
     else if(week_number==7){
        printf("Friday");
     }
     else{
        printf("Invalid Week Day....");
     }
return 0;
}
