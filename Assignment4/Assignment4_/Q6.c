/*Program to print factorial of a given number*/
#include<stdio.h>
int fact(int);
void main()
{
    int n,res;
    printf("\nEnter a number");
    scanf("%d",&n);
    res=fact(n);
    printf("\nFactorial of %d is %d",n,res);
}

int fact(int n)
{
    int i, res=1;
      for(i=1;i<=n;i++)
      {
          res*=i;
       }
       return res;
}