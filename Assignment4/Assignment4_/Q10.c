/*Program to demonstrate the use of global variables*/

#include<stdio.h>
void add();
void subtract();
int a=10;
int b=20;
int c,d;                //global scope


void main()
{
    add();
    
    printf("\na=%d b=%d",a,b);
    printf("\na+b= %d",c);
    
    subtract();
    printf("\na-b=%d",d);
}

void add()
{
      int a=20;    //local scope 
    c=a+b;
    
       
}
void subtract()
{
       d=a-b;
}
