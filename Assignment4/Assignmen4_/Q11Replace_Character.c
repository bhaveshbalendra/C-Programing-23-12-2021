//Program to repalce a character with next character (a->b,b->c,…)
#include <stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char str[30];
    int i;
    printf("Enter the sentence");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        str[i]++;
    }
    printf("The output string is =%s",str);
}
        
    


