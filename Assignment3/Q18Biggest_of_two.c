// program for Using conditional or ternary operator,
// find largest of two numbers
#include<stdio.h>
int main()
{
  // Variable declaration
   int a,b,big;  
   printf("Enter two number\n");
   scanf("%d %d",&a,&b);

  // Largest among a and b ternary
   big = (a>b) ? (a) : (b) ;      

 // Print the largest number
   printf("largest number is : %d",big);  
   return 0;
}