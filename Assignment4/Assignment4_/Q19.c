/*Program to demonstrate Increment and Decrement */
#include <stdio.h>
void main()
{
int a = 1;
int b = ++a + a++ + a--;
//int b = ++a + a++ + a--;
printf("Value of b is %d", b);
}
