#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=17;j++)
        {
            if(i<=4)
            {
                if ( ( (2*(5-i))==j ) ||   ((((2*(4+i))-1)==j)  &&  (j!=9) ) )
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


