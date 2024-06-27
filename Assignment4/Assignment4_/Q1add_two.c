//Program to add two numbers using the function
#include<stdio.h>
void add();
void main()
{
    add();
}

void add()
{
    int a,b,sum;
    printf("Enter the values for a and b\n");
    scanf("%d %d",&a,&b);
   
    sum=a+b;
    
    printf("sum=%d",sum);
}
