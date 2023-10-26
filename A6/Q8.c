//Write a program to check whether a given number is a Prime number or
//not
#include <stdio.h>
int main()
{
    int n,cnt=0;
    printf("Enter a number:");
    scanf("%d",&n);

      for(int i=2;i<n-1;i++)
        {
            if(n%i)  
             cnt=0;

            else
            cnt++ ;

        } 

        if(!cnt && num!=1)
        printf("%d is a prime number",n);

        else
         printf("%d is not a prime number",n);



}
