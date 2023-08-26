/*
42.	Write a program to input the basic salary
of an employee and calculate its Gross salary
according to the following:
Basic Salary <= 10000: HRA = 20%, DA = 80%
Basic Salary <= 20000: HRA = 25%, DA = 90%
Basic Salary > 20000: HRA = 30%, DA = 95%.


*/

#include<stdio.h>
int main(){
      double basic_salary, gross_salary, hra,da;
      printf("Enter the basic Salary::");
      scanf("%lf",&basic_salary);
      if(basic_salary<=10000){

        da=basic_salary*0.8;
        hra=basic_salary*0.2;

      }
      else if(basic_salary<=20000){

        da=basic_salary*0.90;
        hra=basic_salary*0.25;

      }
      else{

        da=basic_salary*0.95;
        hra=basic_salary*0.30;

      }
      gross_salary=basic_salary+da+hra;

      printf("Gross Salary is::%.3lf",gross_salary);


return 0;
}
