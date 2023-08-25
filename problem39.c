/*
39.	Write a program to find the eligibility for admission to a
professional course base on the following criteria:
Marks in MATHS >= 65
Marks in PHY >= 55
Marks in CHEM >= 50
Total in all three subjects => 180
Or,
Total in Math and physics >=140.

*/
#include<stdio.h>
int main(){

    double maths, phy, chem, total_three_sub, total_math_phy;

    printf("Enter Maths , Phy, Chemistry Marks::");
    scanf("%lf %lf %lf",&maths,&phy,&chem);

    printf("Total Marks in Three Sub::%.2lf\n",maths+phy+chem);

    printf("Total Marks Math & Physics::%.2lf\n",maths+phy);

    if((maths>=65) &&(phy>=55) && (chem>=50) && (maths+phy+chem==180) || (maths+phy>=140)){
        printf("you are Eligible! ");
    }
    else{
        printf("You Failed! ");
    }


return 0;
}
