/*          A
          A B A
        A B C B A
      A B C D C B A
    A B C D E D C B A
*/
#include <stdio.h>
int main()
{
    for(int row =1;row<=5;row++)
    {    char ch='A'-1;
        for(int col=1;col<=4+row;col++)
        {
            if(col<=5-row)
                printf("  ");
            else
            {
                if(col<=5)
                    printf("%c ",++ch);
                else
                    printf("%c ",--ch);
            }
        }  printf("\n");
    }
    return 0;
}
