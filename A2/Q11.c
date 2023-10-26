#include <stdio.h>
int main()
{
 int x,d;
 printf("Enter a number");
 scanf("%d",&x);
 printf("Enter a digit");
 scanf("%d",&d);
 printf("output after appending the digit in the number: %d\n",x*10+d);
}