//Write a Program that takes minutes as input and displays the total number of hours and minutes.
#include<stdio.h>
int main(){

    int hr,min;
    printf("Enter the total number of minutes::");
    scanf("%d",&min);
    hr=min/60;
    printf("Total Hours:::%d\n",hr);

    min=min%60;
    printf("Minutes::%d\n",min);






return 0;
}
