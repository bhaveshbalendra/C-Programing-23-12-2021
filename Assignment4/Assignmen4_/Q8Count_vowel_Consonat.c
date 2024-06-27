//Program to count vowels and consonants in a string
#include <stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char str[40],ch;
    int i,vowel_count,con_count;
    printf("Enter a sentense");
    gets(str);
    vowel_count=con_count=0;
    for(i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            ch=tolower(str[i]);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowel_count++;
            else
            con_count++;
        }
    }
    printf("\nvowels=%d \n consonants=%d",vowel_count,con_count);
}
