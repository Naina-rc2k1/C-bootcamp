// Write a program to print the first N  odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    for(int i=n-1;i>=0;i--)
      printf("%d ",2*i+1);
    
    printf("\n");
}