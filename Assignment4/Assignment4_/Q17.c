/*Program to demonstrate Functions with arguments and with return values
*/
#include<stdio.h>
main (){
   int sum ( int,int);
   int a,b,c;
   printf("enter 2 numbers");
   scanf("%d%d", &a,&b);
   c= sum (a,b);
   printf ("sum=%d", c);
   
}
int sum ( int a, int b ){
   int c;
   c= a+b;
   return c;
}
