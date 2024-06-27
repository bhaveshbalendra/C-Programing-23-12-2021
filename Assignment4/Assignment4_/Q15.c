/*Program to demonstrate Functions without arguments and with return values
*/

#include<stdio.h>
void main (){
   int sum ();
   int c;
   c= sum ();
   printf("sum = %d",c);
   getch ();
}
int sum (){
   int a,b,c;
   printf("enter 2 numbers");
   scanf ("%d%d", &a, &b);
   c = a+b;
   return c;
}
