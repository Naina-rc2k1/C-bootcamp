/*
         *
        ***
       *****
      *******
     *********     */

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4+i;j++)
            if(j<=5-i)
            printf(" ");
        else
            printf("*");

        printf("\n");
    }
}
