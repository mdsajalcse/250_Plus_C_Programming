//Write a program to find the third angle of a triangle if two angles are given
#include<stdio.h>
#include<math.h>
int main(){

    double ang1,ang2,ang3;
    printf("Enter The First Angle::");
    scanf("%lf",&ang1);
    printf("Enter The Second Angle::");
    scanf("%lf",&ang2);
    ang3=180-(ang1+ang2);
    printf("Third angle of triange is::%.2lf",ang3);

return 0;
}
