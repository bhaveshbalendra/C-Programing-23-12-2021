/* User defined function to copy a string*/
#include <stdio.h>
#include<string.h>

void mystrcpy(char dstr[], char sstr[])
{
int c=0;
while(sstr[c]!='\0')
{
dstr[c]=sstr[c];
c++;
} 
dstr[c]='\0';
}

void main()
{
char sstr[]="IIIT Naya Raipur";
char dstr[20];
mystrcpy(dstr, sstr);
printf("The copied string is %s ", dstr);
}
