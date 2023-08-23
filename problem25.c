//Write a program to input any character and check whether it is the alphabet,
// digit, or special character

#include<stdio.h>
int main(){

   char ch;
   printf("Enter Any character and check whether it is the alphabet digit, or special character=");
   scanf("%c",&ch);
   if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z'){
    printf("It is Alphabet.");
   }
   else if(ch>='0'&&ch<='9'){

    printf("It is Digit");
   }
   else{
    printf("Special Character");
   }

return 0;
}
