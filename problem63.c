//Write a program to print those numbers from 1 to 100 which are divisible by 7.
#include<stdio.h>
int main()
{

    int number_limit=100,i;
    printf("numbers from 1 to 100 which are divisible by 7\n");
    for(i=1;i<=number_limit;i++){
            if(i%7==0)
                {
        printf("%d\n",i);
               }
    }



    return 0;
}
