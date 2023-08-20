//Write a program to calculate the perimeter and area of a circle with a given radius.
#include<stdio.h>
#include<math.h>
int main(){

    double radius,perimeter,area;
    printf("Enter The Radius::");
    scanf("%lf",&radius);

    perimeter=2*3.14*radius;
    printf("The Perimeter is::%lf\n",perimeter);

    area=3.14*radius*radius;
    printf("The Area of Circle is::%lf",area);

return 0;
}
