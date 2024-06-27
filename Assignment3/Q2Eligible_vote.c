//C Program for Check whether a person is eligible 
//to vote or not by accepting age from keyboard
#include<stdio.h>
int main()
{
	int a ;
	
	//taking input from user
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	//check Condition for  voting eligibility
	if (a>=18)
	{
		printf("Eigibal for voting");
	}
	else
	{
		printf("Not eligibal for voting\n");
	}	

	return 0;
}
