/*
40.	Write a program to read the temperature in centigrade and display a
suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then very cold weather
Temp 10-20 then cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then it’s hot
Temp >=40 then it’s very hot.
*/

#include<stdio.h>
int main(){

    double temp;

     printf("Enter Temperature::");
     scanf("%lf",&temp);

      if(temp<0) //Temp < 0 then Freezing weather
        {
        printf("It is Frezzing weather...");

        }
      else if(temp<10) //Temp 0-9 then very cold weather
      {
        printf("It is very cold weather...");
      }
      else if(temp<20)//Temp 10-19 then cold weather
      {
        printf("It is Cold weather...");
      }
      else if(temp<30) //Temp 20-30 then Normal in Temp

      {
        printf("It is Normal weather...");
      }

     else if(temp < 40) //Temp 30-40 then it’s hot
        {
        printf("It is Hot weather...");
      }

     else if(temp>=40) //Temp >=40 then it’s very hot.
        {
        printf("It is very Hot weather...");
      }






return 0;
}
