#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("values after swapping:\na=%d and b=%d",a,b);
    printf("\n");
}