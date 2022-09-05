/*   A B C D E F G F E D C B A
     A B C D E F   F E D C B A
     A B C D E       E D C B A
     A B C D           D C B A
     A B C               C B A
     A B                   B A
     A                       A
*/

#include <stdio.h>
int main()
{
    for(int i=1;i<=7;i++)
    {    char ch='A'-1;
        for(int j=1;j<=13;j++)
        { if(j<=8-i)
            printf("%c ",++ch);

         else
        {
            if(j>=6+i)
            {
                if(i==1 && j>=8)
                    printf("%c ",--ch);
                else
                    printf("%c ",ch--);
            }


            else
              printf("  ");
        }

        }
        printf("\n");
    }
}
