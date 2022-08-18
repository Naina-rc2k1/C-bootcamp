#include <stdio.h>
int main()
{
    int D=0,M=0,Y=0;
    char a;
    printf("ENTER DATE in DD//MM//YY FORMAT");
    scanf("%d %c %d %c %d",&D,&a,&M,&a,&Y);
    printf("DAY-%d ,Month-%d ,Year-%d",D,M,Y);
    return 0;
}
