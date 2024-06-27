/*Program to demonstrate Functions with arguments and without return values
*/
#include<stdio.h>
void main (){
   void sum (int, int );
   int a,b;
   printf("enter 2 numbers");
   scanf("%d%d", &a,&b);
   sum (a,b);
  }
void sum ( int a, int b){
   int c;
   c= a+b;
   printf ("sum=%d", c);
}
