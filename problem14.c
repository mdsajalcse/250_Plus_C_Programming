//Write a program to convert specified days into years, weeks and the rest of the days.
#include<stdio.h>
int main(){

    int days,years,weeks;

    printf("Enter Your Days::");
    scanf("%d",&days);
    years=days/365;
    printf("Years is::%d\n",years);

    weeks=(days%365)/7;
    printf("Weeks is::%d\n",weeks);

    days=days-((years*365)+(weeks%7));
    printf("Days is::%d\n",days);







return 0;
}
