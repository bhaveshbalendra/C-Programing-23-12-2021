//Program to demonstrate string comparison using user defined function
#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[]="RAIPUR", s2[]="CHHATTISGARH";
    int difference;
    difference=my_strcmp(s1,s2);
    if(difference==0)
        printf("\n%s=%s",s1,s2);
    else if(difference>0)
        printf("\n%s>%s",s1,s2);
    else
        printf("\n%s<%s",s1,s2);
}
int my_strcmp(char s1[],char s2[])
{
    int i=0,j;
    while(s1[i]==s2[i])
    {
        if((s1[i]=='\0')||(s2[i]=='\0'))
        break;
        i++;
    }
    return (s1[i]-s2[i]);
}
