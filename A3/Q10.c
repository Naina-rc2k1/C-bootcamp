#include <stdio.h>
int main()
{
    float cp,sp,profit_percent,loss_percent;
    printf("Enter the cost price :");
    scanf("%f",&cp);
    printf("Enter the selling price :");
    scanf("%f",&sp);

    if(cp>sp)
    {
        loss_percent=((cp-sp)/cp)*100;
        printf("Loss percentage is %f\n",loss_percent);

    }

    else
    {

        profit_percent=((sp-cp)/cp)*100;
        printf("profit percentage is: %f\n",profit_percent);

    }
}