//program to add two numbers using pointers
#include<stdio.h>
void main()
{
    int a=30, b=50,sum;
    int *pa,*pb;
    pa = &a;
    pb = &b;
    sum = *pa + *pb;
    printf("sum=%d",sum);
    
}


