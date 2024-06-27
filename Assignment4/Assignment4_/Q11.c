/*Program to demonstrate the use of local variables*/

#include<stdio.h>
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("\nResult=%d",c);
}

void main()
{
    int a=10, b=20;
    
    add(a,b);
}
