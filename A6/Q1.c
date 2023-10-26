// Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int n,t;
    int sum=0;
    
    printf("How many no. u want to enter");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter a number:");
        scanf("%d",&t);
         sum+=i;
    }    

      printf(" sum of %d entered number is %d",n,sum);
      printf("\n");
}