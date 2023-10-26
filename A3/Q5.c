#include <stdio.h>
int main()
{    
    int num,i=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        i++;
    }

    if(i==3)
     printf("It is  a three digit number\n");

    else
     printf("It is not a 3 digit number\n");
        
}