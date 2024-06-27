#include<stdio.h>
void main()
{
    int a=10,b=20;
    //accessing the date using variable
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    //accessing the address of variable
    printf("Address of a = %d\n",&a);
    printf("Address of b = %d\n",&b);
    //accessing the date using de referencing operation
    printf("Address of a = %d\n",*&a);
    printf("Address of b = %d\n",*&b); 
}
