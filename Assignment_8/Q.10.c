/*   1 2 3 4 3 2 1
     1 2 3 3 2 1
     1 2     2 1
     1         1

*/
#include <stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {       int num=1;
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i)
            printf("%d ",num++);


            else
            {
                 if(j>=3+i)
                 {   if(i==1 && j==5)
                        {
                            num--;
                        printf("%d ",--num);
                         }

                    else
                        printf("%d ",--num);
                 }
                else

                    printf("  ");
            }
        }printf("\n");
        }
}

