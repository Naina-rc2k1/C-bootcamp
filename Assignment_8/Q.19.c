#include <stdio.h>
int main()
{
    for(int i=1;i<=14;i++)
    {
        for(int j=1;j<=19;j++)
        {
            if(i<=3)
            {
                if  (  (j>=4-i && j<=6+i) || (j>=14-i && j<=16+i)  )
                printf("*");

                else
                    printf(" ");
            }

            if(i==4)
            {  if(j<=2+i ||  j>=9+i)
                printf("*");

                    else
                {
                     if(j==7)
                    printf("%s","M");

                   else
                    {
                        if(j==8)
                    printf("%s","y");

                     else
                     {
                          if(j==9)
                     printf("%s","S");

                    else
                    {
                         if(j==10)
                     printf("%s","i");

                     else

                    {
                         if(j==11)
                     printf("%s","r");

                     else
                   {
                        if(j==12)
                     printf("%s","G");
                   }

                    }
                     }
                     }

                    }



                }
            }

            if(i>=5)
            {
                if(j>=i-3 && j<=23-i)
                    printf("*");

                else
                    printf(" ");
            }
        } printf("\n");

    }
    return 0;
}
