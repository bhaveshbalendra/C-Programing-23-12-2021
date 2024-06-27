//C Program to Find the largest number among five numbers using if-else
#include <stdio.h>
//main program
int main(void) 
{
int a,b,c,d,e;
//taking input form the user
	printf("\nEnter the value of a,b,c,d,e :\n ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//comparing  a b c d and e
	if(a>b && a>c && a>d && a>e)
	{
		printf("%d  is maximum",a);
	}
	else if(b>c && b>d && b>e)
	{
		printf("%d  is maximum",b);
	}
	else if(c>d && c>e)
	{
		printf("%d  is maximum",c);
	}
	else if(d>e)
	{
		printf("%d  is maximum",d);
	}
	else   
	{
		printf("%d  is maximum",e);
	}
	return 0;
}