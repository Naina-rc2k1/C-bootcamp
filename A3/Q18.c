#include <stdio.h>
int main()
{
    int month;
    printf("Enter the Month number:");
    scanf("%d",&month);

    if(month==1 || month==3 || month==5 || month==7 || month==8|| month==10 || month==12)
      printf("This has 31 days\n");

    else 
      {
        if(month==2)
         printf("february has 28 days\n");

         else
          printf("this month has 30 days \n");
      }
}