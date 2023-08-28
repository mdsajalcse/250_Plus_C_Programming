
/*43.	Write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
________________________________________

*/

#include<stdio.h>
int main()
{
	double amount, total_Amount, unit, extraCharge;

	printf("Enter the units consumed=");
	scanf("%lf",&unit);

	if(unit<=50){
        amount=unit*0.50;

	}
	else if(unit<=150){
        amount=(50*0.50)+(unit-50)*0.75;
	}
	else if(unit<=250){
            amount=(50*0.50)+(100*0.75)+(unit-150)*1.20;
        }

     else{

        amount=(50*0.50)+(100*0.75)+(100*1.20)+(unit-150)*1.50;
     }

       extraCharge= amount* 0.20;
       total_Amount= amount+extraCharge;

       printf("Total Bill = %.2lf TK.",total_Amount);

	return 0;
}
