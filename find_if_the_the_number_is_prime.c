#include <stdio.h>
int main()
{ int a,i;
    printf("enter the number:");
    scanf("%d",&a);
    
    if (a==2 || a==3 || a==5 || a==7)
    
       printf("the number is prime number");
    
    
    else if (a%2==0 || a%3==0 || a%5==0 || a%7==0)
        printf("the number is not a prime number.");

    else
    printf("the number is prime number");
    
}