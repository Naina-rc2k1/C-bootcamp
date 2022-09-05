/*    *

      * *

      *   *

      *     *

      * * * * *

*/
#include <stdio.h>
int main()
{
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
         {
            if(row==1 || row==2 || row==5)
            printf("* ");

           else
           {
               if(col>=2 && (row-col==1 || row-col==2))
                  printf("  ");
               else

                printf("* ");

           }
         }  printf("\n");
            printf("\n");


    }
    return 0;

}
