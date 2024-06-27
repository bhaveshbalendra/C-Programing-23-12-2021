#include<stdio.h>
void main()
{
    int *p;
    int *q;
    int *r;
    int x=20;
    p=&x;
    q=&x;
    r=&x;
    printf("&p=%u,p=%u,*p=%d\n",&p,p,*p);
    printf("&q=%u,q=%u,*q=%d\n",&q,q,*q);
    printf("&r=%u,r=%u,*r=%d\n",&r,r,*r);
}