//Write a program to check whether the character is an alphabet or not.
#include<stdio.h>
int main(){

     char ch;
     printf("Enter any Character to check Alphabet or Not::");
     scanf("%c",&ch);
     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z' )){


        printf("%c is Alphabet",ch);

     }
     else{

         printf("%c is not Alphabet",ch);
     }


return 0;
}
