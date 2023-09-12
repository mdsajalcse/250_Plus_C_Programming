//Percentage calculate

#include<stdio.h>
int main(){

    double totalValue, percentValue,result;
    printf("Enter the totalValue::");
    scanf("%lf",&totalValue);
    printf("Enter the percentValue::");
    scanf("%lf",&percentValue);
    result=(percentValue/totalValue)*100;
    printf("The result is::%lf",result);

return 0;
}




