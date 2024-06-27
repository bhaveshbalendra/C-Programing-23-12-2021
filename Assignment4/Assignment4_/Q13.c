/*Program to check whether the character is digit or not*/

#include<stdio.h>
int  is_digit(int c)
{
    if(c>='0' && c<='9')
        return 1;
    else
        return 0;
}
 
void main()
{
   char c;
   int flag;
   
   printf("\nEnter a character");
   scanf("%c",&c);
   flag=is_digit(c);
   if(flag==1)
        printf("\nThe character %c is digit",c);
    else
        printf("\nThe character %c is not a digit",c);
}
