#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    
    if(num%5==0)
      printf("%d is divisible by 5\n",num);
     
    else
    printf("not divisible by 5\n");
}