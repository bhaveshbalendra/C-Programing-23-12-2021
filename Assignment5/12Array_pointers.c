//program to display array elements using pointers
#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50};
    int *p;
    int i;
    p=a;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",*p);
        p++;
    }
}