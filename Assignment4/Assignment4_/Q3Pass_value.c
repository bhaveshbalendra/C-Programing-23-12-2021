//Program to show the concept of pass by values
#include<stdio.h>
void swap(int, int);
void main()
{
    int a,b;
    a=10, b=20;
    printf("\nBefore Swapping a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping a=%d b=%d",a,b);
}

void swap(int m, int n)
{
      int temp;
      temp=m;
      m=n;
      n=temp;
      printf("\nValues at swapping a=%d, b=%d",m,n);
}
