#include <stdio.h>
int main()
{
    int l1,l2,l3;
    printf("Enter three lengths of triangle");
    scanf("%d %d %d",&l1,&l2,&l3);
     
     if(l1+l2>=l3 && l1+l3>=l2 && l2+l3>=l1)
        printf("This is a valid triangle\n");
    
    else
     printf("this is not a valid triangle\n");
}