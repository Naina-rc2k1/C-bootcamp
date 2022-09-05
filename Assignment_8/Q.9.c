/*   1234321
      12321
       121
        1
*/
#include <stdio.h>
int main()
{
    for (int i=1;i<=4;i++)
    {      int num=0;
        for(int j=1;j<=8-i;j++)
            if(j<=i-1)
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
