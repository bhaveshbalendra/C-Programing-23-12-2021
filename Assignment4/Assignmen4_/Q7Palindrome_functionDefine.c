//Program to check a  string is palindrome or not using user defined function 
#include <stdio.h>
#include<string.h>
void my_strrev(char[],char[]);
char s1[]="NITIN";
char d1[10];
int i, f=1;
void main()
{
     printf("String =%s",s1);
    my_strrev(s1,d1);
    printf("\nReversed String =%s",d1);
    printf("\n");
    i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=d1[i])
        {
            printf("Not Polindrome");
            f=0;
            break;
        }
        i++;
    }
    if(f==1)
        printf("The string is Polindrome");
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
