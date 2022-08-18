#include <stdio.h>
int main()
{
    float R=0,A=0;
    printf("Enter radius of circle");
    scanf("%f",&R);
    A=3.14*R*R;
    printf("Area of circle is %f having the radius %f",A,R);
    return 0;
}
