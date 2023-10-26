#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
     if(num>0)
      printf("number is positive\n");

     else
     {
        if(num<0)
         printf("number is negaive\n");

        else
        printf("number is equal to 0\n");

          
     }

}