//Write a program to print the total number of days in a month using a switch case.

#include<stdio.h>
int main(){

     int month;

     for(;;){
     printf("Enter Month (1-12)=");
     scanf("%d",&month);

     switch(month){
     case 1:
           printf("Jaunary is 31 Days..\n");
           break;
     case 2:
           printf("February is 28/29 Days..\n");
           break;
      case 3:
           printf("March is 31 Days..\n");
           break;
      case 4:
           printf("April is 30 Days..\n");
           break;
      case 5:
           printf("May is 31 Days..\n");
           break;
      case 6:
           printf("June is 30 Days..\n");
           break;
      case 7:
           printf("July is 31 Days..\n");
           break;
        case 8:
           printf("August is 31 Days..\n");
           break;
        case 9:
           printf("September is 30 Days..\n");
           break;
        case 10:
           printf("October is 31 Days..\n");
           break;
        case 11:
           printf("November is 30 Days..\n");
           break;
        case 12:
           printf("December is 31 Days..\n");
           break;

      default:
        printf("Invalid Choice ! please input (1-12 )\n");

     }
     }


return 0;
}
