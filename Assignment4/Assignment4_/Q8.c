/*Program to add the series 1-2+3-4+5-6...*/
#include<stdio.h>
int add_numbers(int);
void main()
{
    int n,sum;
    printf("\nEnter the number of values in series");
    scanf("%d ",&n);
    sum=add_numbers(n);
    printf("\nSum of series is %d",sum);
}

int add_numbers(int n)
{
    int i, sum=0;
      for(i=1;i<=n;i++)
      {
          if((i%2)==1)
            sum=sum+i;
        else
            sum=sum-i;
      }
       return sum;
}
