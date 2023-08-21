//Write a program that reads a first name, last name, and year of birth and displays the names and the year one after another sequentially.


#include<stdio.h>
int main(){

    char firstName[30];
    char lastName[34];
    int age;
    printf("Enter Your FirstName::");
    scanf("%s",&firstName);
    printf("Enter Your LastName::");
    scanf("%s",&lastName);
    printf("Enter Your Age::");
    scanf("%d",&age);
    printf("Your Name and Age is::%s %s %d\n",firstName , lastName, age);





return 0;

}
