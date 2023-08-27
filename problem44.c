//Write a program to print the day of the week name using a switch case.
#include<stdio.h>
int main(){

     int week;

     for(;;){
     printf("Enter Week (1-7)=");
     scanf("%d",&week);

     switch(week){
     case 1:
           printf("Saturday\n");
           break;
     case 2:
           printf("Sunday\n");
           break;
      case 3:
           printf("Monday\n");
           break;
      case 4:
           printf("Tuesday\n");
           break;
      case 5:
           printf("Wednesday\n");
           break;
      case 6:
           printf("Thursday\n");
           break;
      case 7:
           printf("Friday\n");
           break;

      default:
        printf("Invalid Choice !\n");

     }
     }


return 0;
}

