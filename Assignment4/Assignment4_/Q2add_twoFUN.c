//Program to add two numbers using the function
#include<stdio.h>
int add(int, int);
void main()
{
    int sum;
    add(2,4);
    printf("%d ",add(5,10));
    sum=add(8,14)+10;
    printf("\tSum=%d ",sum);
}

int add(int a, int b)
{
      printf("-%d-",a+b);
}

