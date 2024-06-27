//Program to demonstrate string reverse using user defined function 
#include <stdio.h>
#include<string.h>
void my_strrev(char[],char[]);
char s1[]="NAYARAIPUR";
char d1[10];
void main()
{
    
    printf("String =%s",s1);
    my_strrev(s1,d1);
    printf("\nReversed String =%s",d1);
    
}

void my_strrev(char s1[],char d1[10])
{
    int i,n;
    n=strlen(s1);
    for(i=0;i<n;i++)
    {
        d1[n-1-i]=s1[i];
    }
    d1[i]='\0';
}
