/*
       * * * * * * * * *


        *           *


          *       *


            *   *


              *

*/

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=17;j++)
        {  if(i>=2)
         {
             if(  j==(2*i-2)  || ( j==(2*(9-i))  && j!=5 )    )
                printf("*");
             else
                printf(" ");

         }
         else
         {
             if(j%2!=0)
                printf("*");
             else
                printf(" ");
         }

        } printf("\n");
         printf("\n");
}
}
