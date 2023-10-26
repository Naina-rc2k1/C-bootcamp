#include <stdio.h>
int main()
{
    int a;
    printf("Enter a three-digit number");
    scanf("%d",&a);
    int b=a%10;
    a=a/10;
    int c=a%10;
    a=a/10;
    int d=a%10;
    printf("Sum of digits is %d\n",b+c+d);
}