// Write a program to print the first N natural numbers i reverse order.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
      printf("%d ",i);
    
    printf("\n");
}