
/*Program to check whether a given number is prime or not*/
#include<stdio.h>
int isprime(int);
void main()
{
    int n;
    printf("\nEnter a number");
    scanf("%d",&n);
    if(isprime(n))
        printf("\n%d is prime number",n);
    else
        printf("\n%d is not prime number",n);
}

int isprime(int x)
{
    
      int i;
      for(i=2;i<=x/2;i++)
      {
          if(x%i==0)
          {
              return 0;
          }
      }
         return 1;
}
