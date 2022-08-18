#include <stdio.h>
int main()
{
      int H,M;
      char c;
      printf("enter time in HH:MM format ");
      scanf("%d%c%d",&H,&c,&M);

   if(M>59)
   {
       H=H+M/60;
       M=M%60;
   }

  printf("%d Hour and %d Minute",H,M);
  return 0;

}


