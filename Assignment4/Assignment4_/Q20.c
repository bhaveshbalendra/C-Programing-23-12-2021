/*Program to demonstrate Sizeof operator */
#include <stdio.h>
#include<conio.h>
void main()
{
    int i;
    float x;
    double lf;
    char c;
printf("integer: %d\n", (int)sizeof(i)) ;
printf(" float : %d\n", (int)sizeof(x)) ;
printf("double: %d\n", (int)sizeof(lf)) ;
printf("character: %d\n" , (int)sizeof(c)) ;
}
