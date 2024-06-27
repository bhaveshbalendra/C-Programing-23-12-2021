//Program to find length of a string
#include <stdio.h>
#include<string.h>

int mystrlen(char str[])
{
int c=0;
while(str[c]!='\0')
c++;
return c;
}

void main()
{
char str[]="Chhattisgarh raipur";
printf("The length of the string is %d ", mystrlen(str));
printf("Built in value is: %d", strlen(str));
}
