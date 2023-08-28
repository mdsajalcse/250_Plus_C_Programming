//Write a program to check whether a number is positive, negative, or zero using a switch case.

  #include<stdio.h>
int main(){
    int number;
    for(;;){
    printf("Enter any Number...\n");
    scanf("%d",&number);
    switch(number>0){
 case 1:
    printf("%d is Positive\n",number);
    break;

 case 0:
     switch(number<0){
 case 1:

     printf("%d is Negative\n",number);
     break;
 case 0:
     printf("%d is Zero\n",number);
     break;

    }
    }
    }
return 0;
}
