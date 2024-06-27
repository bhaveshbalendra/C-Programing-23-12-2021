#include <stdio.h>

int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d",&num);

	if (num % 5 == 0, num % 3 ==0)
	{
	
		printf("Yes Number is Multiple of 5 and 3");
		
	}
	else
	{
		printf("No it is not the Multiple of 5 and 3");
	}
	return 0;
}
