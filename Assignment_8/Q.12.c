/*    A B C D C B A
        A B C B A
          A B A
            A
*/
#include <stdio.h>
int main()
{
    for(int row=1;row<=4;row++)
        {    char ch='A'-1;
            for(int col=1;col<=8-row;col++)
               {  if(col<=row-1)
                     printf("  ");


                 else
                 {    if(col<=4 )
                     printf("%c ",++ch);

                 else
                    printf("%c ",--ch);
                 }
               }
               printf("\n");

        }
    return 0;

}
