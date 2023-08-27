//Write a program to check whether an alphabet is a vowel or consonant using a switch case.

#include<stdio.h>
int main(){

     char alphabet;

     printf("Enter Any Alphabet To Check Vowel Or Consonant=");
     scanf("%c",&alphabet);

     switch(alphabet){
     case 'a':
           printf("Vowel\n");
           break;
     case 'e':
           printf("Vowel\n");
           break;
     case 'i':
           printf("Vowel\n");
           break;
     case 'o':
           printf("Vowel\n");
           break;
     case 'u':
           printf("Vowel\n");
           break;
     case 'A':
           printf("Vowel\n");
           break;
     case 'E':
           printf("Vowel\n");
       break;
     case 'I':
           printf("Vowel\n");
           break;
     case 'O':
           printf("Vowel\n");
           break;
     case 'U':
           printf("Vowel\n");
           break;

      default:
        printf("consonant\n");
        break;





     }


return 0;
}
