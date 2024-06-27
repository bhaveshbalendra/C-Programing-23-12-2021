/*Program to demonstrate static variables*/

#include<stdio.h>
void display()
{
     static int i=0;
    i++;
    printf("\ni=%d",i);
}

void main()
{
   display();
   display();
   display();
   display();
   display();
}
