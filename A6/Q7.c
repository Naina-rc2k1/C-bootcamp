//7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter a number:");
    scanf("%d",&num);

    do{
         int r=num%10;
           i++;
          num=num/10;
    }while(num);

    printf("No. of digits is %d",i);
    
}