/*Program to demonstrate compound ternary operator */
#include<stdio.h>
void main()
{
int a,b,choice,result;
printf("Enter a,b");
scanf("%d %d",&a,&b);
printf("Enter Choice 1-Addition 2-Multiplication");
scanf("%d",&choice);
result=(choice==1)?a+b:(choice==2)?a*b:printf("Invalid input");
if(choice==1||choice==2)
printf("The result is %d",result);
}
