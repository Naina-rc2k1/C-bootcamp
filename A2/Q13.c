#include <stdio.h>
int main()
{   
    int num;
    printf("Enter a three digit number ");
    scanf("%d",&num);
    int q=num/10;
    int r=num%10;
    printf("after rotation : %d\n",r*100+q);

    

}