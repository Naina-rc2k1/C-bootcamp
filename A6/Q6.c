//Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
       {
        fact=fact*i ;
       }
    
    printf("factorial of %d numbers is %d\n",num,fact);
}