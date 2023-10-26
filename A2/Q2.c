#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d without its last digit is %d\n",num,num/10);
}