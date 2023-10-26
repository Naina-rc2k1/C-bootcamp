#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values after swapping:\na=%d and b=%d",a,b);
    printf("\n");
}