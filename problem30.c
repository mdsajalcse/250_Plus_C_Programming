//Write a program to check the uppercase or lowercase alphabet.

#include<stdio.h>
int main(){

     char ch;
     printf("Enter any Character to check Uppercase or lowercase alphabet::");
     scanf("%c",&ch);
     if(ch>='a' && ch<='z'){
     printf("%c is lower case Alphabet",ch);
     }
     else if (ch>='A' && ch<='Z' ){
     printf("%c is lower case Alphabet",ch);
     }
return 0;
}
