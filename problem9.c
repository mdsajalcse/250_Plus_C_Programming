//Write a Program to enter marks of five subjects and calculate the total, average, and percentage.
#include<stdio.h>
int main(){

    double bangla,english,math,ict,botany,total,average,percentage;
    printf("Enter Five Subjects Number::");
    scanf("%lf %lf %lf %lf %lf",&bangla,&english,&math,&ict,&botany);

    total=bangla+english+math+ict+botany;
    printf("Total Number::%lf\n",total);

    average=total/5;
    printf("Average Marks::%lf\n",average);

    percentage=(total/500)*100;
    printf("Percentage Marks::%.lf Percent(%)",percentage);




return 0;
}
