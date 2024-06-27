//sum of array using pointers
#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50};
    int *p;
    int i,sum;
    p=a;
    sum=0;
    for(i=0;i<=4;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf("The sum is %d",sum);
}