// Write a program to calculate sum of squares of first N  numbers
int main()
{
    int n,t;
    int sum=0;
    
    printf("How many no. u want to enter");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         sum+=i*i;
    }    

      printf(" sum of squares of first %d  natural number is %d",n,sum);
      printf("\n");
}