#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Unit digit of %d is %d\n",num,num%10);
    return 0;
}