/*
Your younger brother studied in a primary school.He is fluent in the English alphabet.
But he doesn't know about vowels and consonants.  Your mother assigns you to teach him which
alphabets are vowels and consonants.So you are going to make a program (using else if ladder)
where your brother writes any alphabet and your program will tell him that it is a vowel or
consonant.
*/
#include<stdio.h>
int main(){

   char ch;
   printf("Enter any alphabet to check it is a vowel or consonant.");
   scanf("%c",&ch);

   if(ch=='a'|| ch=='A'){
    printf("%c is Vowel",ch);
   }
  else if(ch=='e'|| ch=='E'){
    printf("%c is Vowel",ch);
   }
  else if(ch=='i'|| ch=='I'){
    printf("%c is Vowel",ch);
   }
   else if(ch=='o'|| ch=='O'){
    printf("%c is Vowel",ch);
   }
   else if(ch=='u'|| ch=='U'){
    printf("%c is Vowel",ch);
   }
   else{
     printf("%c is Consonant",ch);
   }
return 0;
}
