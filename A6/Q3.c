// Write a program to calculate sum of first N odd natural numbers
int main()
{
    int n,t;
    int sum=0;
    
    printf("How many no. u want to enter");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
         sum+=2*i+1;
    }    

      printf(" sum of first %d odd natural number is %d",n,sum);
      printf("\n");
}