//Program to right rotate x value by n-bit positions
#include<stdio.h>
int rotate(int, int);
void main()
{
    int n,x,result;
    printf("\nEnter a number");
    scanf("%d",&x);
    printf("\nEnter number of right rotations");
    scanf("%d",&n);
    result=rotate(x,n);
    printf("\nNumber after rotation=%d",result);
}

int rotate(int x, int n)
{
    
         x=x>>n;
         
        return x;
}
