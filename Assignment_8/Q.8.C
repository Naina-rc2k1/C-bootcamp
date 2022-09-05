/*       1
        121
       12321
      1234321

*/
#include <stdio.h>
int main()
{
    for (int i=1;i<=4;i++)
    {    int num=0;
        for(int j=1;j<=3+i;j++)
           if(j<=4-i)
           printf(" ");

        else
        {
            if(j<=4)
                printf("%d",++num);
            else
                printf("%d",--num);
        }
        printf("\n");

    }
}
