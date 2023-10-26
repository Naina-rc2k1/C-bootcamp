// Write a program to calculate sum of first N even natural numbers
int main()
{
    int n,t;
    int sum=0;
    
    printf("How many no. u want to enter");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         sum+=2*i;
    }    

      printf(" sum of first %d even natural number is %d",n,sum);
      printf("\n");
}