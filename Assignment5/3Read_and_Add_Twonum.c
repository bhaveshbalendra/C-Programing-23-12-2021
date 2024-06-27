//to read and add two numbers using pointers
#include<stdio.h>
void main()
{
    int a,b,sum;
    int *pa, *pb;
    pa=&a;
    pb=&b;
   
    scanf("%d %d",&a,&b);
    sum = *pa + *pb;
    printf("The sum of the two number is:%d",sum);
}
