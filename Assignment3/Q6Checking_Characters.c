//Program to Check whether a given character is alphabet,digit or character
#include <stdio.h>

int main()
{
    char ch;

    //taking the input from the user
    printf("Enter any character: ");
    scanf("%c", &ch);


    //checking the conditions 
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else 
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}