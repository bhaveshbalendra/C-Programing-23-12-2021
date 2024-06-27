#include <stdio.h>
 
int main () 
{

   int  a=12;
   int  *p;
   int  **p1;
   p=&a;
   p1=&p;
   
   printf("Value of a = %d\n", a );
   printf("Value available at *p = %d\n", *p );
   printf("Value available at **p1 = %d\n", **p1);

   return 0;
}