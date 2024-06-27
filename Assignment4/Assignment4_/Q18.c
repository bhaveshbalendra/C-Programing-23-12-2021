/*Program to demonstrate Pre-defined Functions */

#include<stdio.h>
#include<math.h>
void main ( ){
   int x,y,z,n,k,p,r,q;
   printf ("\nenter x and n values:");
   scanf (" %d%d", &x,&n);
   y=cbrt(x);
   z=exp(x);  // e power x
   k=log(x);
   p=ceil(x);
   q=pow(x,n);
   printf("\ncuberoot = %d", y);
   printf("\nexponent value = %d",z);
   printf("\nlogarithmic value = %d", k);
   printf("\nceil value = %d", p);
   printf("\npower = %d", q);
 }
