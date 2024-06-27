#include<stdio.h>
void main()
{
    int a[50]={10,20,30,40,50};
    int i=3;
    printf("%d,%d,%d,%d,%d,%d\n",*(&a[i]),a[i],*(a+i),*(i+a),i[a],*(&i[a]));
    printf("%d,%d,%d,%d",(&a[i]),(a+i),(i+a),(&i[a]));
}