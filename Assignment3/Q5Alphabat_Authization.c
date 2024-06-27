//Program to Check whether a given character is alphabet or not
#include <stdio.h>
int main()
{
    char ch;

    //Asking user to enter the character
    printf("Enter any character: ");
    //storing the entered character into the variable ch
    scanf("%c",&ch);
    //checking the input
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The character %c is an Alphabet",ch);
    else
        printf("The character %c is not an Alphabet",ch);

    return 0;
}