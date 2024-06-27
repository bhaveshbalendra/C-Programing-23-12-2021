
/*Program to compute x to the power n*/
#include<stdio.h>
int power(int,int);
void main()
{
    int x,n,res;
    printf("\nEnter base and exponent");
    scanf("%d %d",&x,&n);
    res=power(x,n);
    printf("\nValue of %d to the power %d is %d",x,n,res);
}

int power(int x,int n)
{
    int i, res=1;
      for(i=1;i<=n;i++)
      {
          res*=x;
      }
       return res;
}
