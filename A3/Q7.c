#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficients:");
    scanf("%d %d %d",&a,&b,&c);
    printf("%dx^2 + %dx +%d\n",a,b,c);
    double d=(b*b-4*a*c);

    if(d<0)
     printf("equation has no real roots\n\n");

    else
     {
        if(d>0)
      printf("Equation has two real and distinct roots\n\n");

        else
      printf("Equation has two real and equal roots\n\n");

     }

}
