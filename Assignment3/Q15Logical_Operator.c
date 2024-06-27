//Program for  Usage of Logical operators &&, ||, !.
#include<stdio.h>

int main()
{
    int a = 6, b = 12 ,opr;
    //OR operator
    opr = ( (a <= b) || (a != b) ); 
    printf("Output: %d\n",opr);
    //AND operator
    opr = ( ( a < b) && (a == b ) ); 
    printf("Output: %d\n",opr);
    //NOT operator
    opr = ! ( ( a < b) && (a == b ) ); 
    printf("Output: %d\n",opr);

    return 0;
}