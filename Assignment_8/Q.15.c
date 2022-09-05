 /*                *

                 * *

               *   *

             *     *

           * * * * *
*/

#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {   if(i<=4)
            {
               if(j==6-i || j==5)
                printf("* ");

               else
                printf("  ");
            }
              else
                 printf("* ");




        }  printf("\n");
           printf("\n");


        }

}
