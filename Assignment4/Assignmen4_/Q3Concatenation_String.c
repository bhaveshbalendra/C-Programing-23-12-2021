//Program to demonstrate Concatenation of two strings
#include <stdio.h>
#include<conio.h>

void main()
{
    char s1[]="RAIPUR", s2[]="CHHATTISGARH";
   printf("\nBefore Concatenation S1=%s S2=%s",s1,s2);
    my_strcat(s1,s2);
    printf("\nConcatenated String=%s",s1);
}

void my_strcat(char s1[],char s2[])
{
    int i=0,j;
    while(s1[i]!='\0')
    i++;
    
    j=0;
    while(s2[j]!='\0')
    {
        s1[i++]=s2[j++];
    }
    s1[i++]='\0';
}
