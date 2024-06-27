/*Program to show scope of variables*/

#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int f=10,g=20;                //global scope


void main()
{
    int sum,difference;   //local scope
    sum=add(10,20);
    difference=substract(20,10);
    printf("\nSum=%d",sum);
    printf("\nDifference= %d",difference);
}

int add(int a,int b)
{
    int d;            //local scope
    d=a+b;
       return d;
}
int substract(int a,int b)
{
    int c;             //local scope
    c=a-b;
       return c;
}
