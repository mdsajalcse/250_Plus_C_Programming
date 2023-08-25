/* Your younger brother studied in a primary school.
He is fluent in the English alphabet. But need to learn about the vowel and consonants.
Your mother assigns you to teach him to know about which alphabets are vowel and consonant.
So you are going to make a program (using else if ladder) where your brother writes any alphabet
and your program will tell him that it is a vowel or consonant.
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
