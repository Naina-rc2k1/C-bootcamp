#include <stdio.h>
int main()
{
 int x;
 printf("Enter a number");
 scanf("%d",&x);
 printf("number after making the last digit as zero is %d \n",x-x%10);
}