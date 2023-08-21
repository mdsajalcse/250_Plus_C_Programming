//Write a program that accepts an employee's ID,
//totally worked hours of a month, and the amount he received per hour.
//Print the employee's ID and salary for a particular month.
#include<stdio.h>
int main(){
    int emp_ID, hours;
    double amount_rcv_per_hour,salary;
    printf("Enter Your ID No:::");
    scanf("%d",&emp_ID);

    printf("Enter Your Amount Received Per Hour:::");
    scanf("%lf",&amount_rcv_per_hour);


    printf("Enter Your total Working Hours:::");
    scanf("%d",&hours);

     salary=amount_rcv_per_hour*hours;

     printf("Your ID is::%d\nYour Salary is::%.lf$ ",emp_ID, salary);





return 0;
}
