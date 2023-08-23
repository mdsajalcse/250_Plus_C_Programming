//Write a program to input the angles of a triangle and check whether a triangle is valid or not.

#include<stdio.h>
int main(){
     int a,b,c,sum;
     printf("input three angles of triangle ::");
     scanf("%d %d %d",&a,&b,&c);
     sum=a+b+c;
     if(sum==180 && a>0 && b>0 && c>0){
        printf("%d triangle is valid.",sum);
     }
     else{
          printf("%d triangle is not valid.",sum);
     }
return 0;
}

