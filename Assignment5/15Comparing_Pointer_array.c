//comparing the pointers array
#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50};
    int *p,*q;
    p=&a[0];
    p=&a[4];
    while(p<=q)
    {
        printf("%d,",*p);
        p++;
    }
}