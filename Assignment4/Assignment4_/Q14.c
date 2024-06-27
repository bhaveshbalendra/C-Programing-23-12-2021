/*Program to demonstrate Functions without arguments and without return values
*/
#include<stdio.h>
void sum ();
void main (){
 
    sum ();
   
}
void sum (){
   int a,b,c;
   printf("enter 2 numbers:\n");
   scanf ("%d%d", &a, &b);
   c = a+b;
   printf("sum = %d",c);
}

 
}