//Write a program to enter the length, and breadth of a rectangle and find its perimeter and area.
//Area = 1⁄2 × base × height


#include<stdio.h>
int main(){
    double breadth ,length, area, perimeter;
    printf("Enter Your breadth::");
    scanf("%lf",&breadth);
    printf("Enter Your Length::");
    scanf("%lf",&length);

    area= 0.5*breadth*length;
    printf("Area is::%lf\n",area);

    perimeter= 2*(breadth+length);
    printf("Perimeter is::%lf",perimeter);




return 0;
}
