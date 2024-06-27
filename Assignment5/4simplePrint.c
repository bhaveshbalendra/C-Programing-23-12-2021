#include<stdio.h>
void main()
{
    int x=10, y=20, z=30;
    int *p;
    p=&x;
    printf("%d\n",*p);
    p=&y;
    printf("%d\n",*p);
    p=&z;
    printf("%d\n",*p);
}