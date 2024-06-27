//Program to count number of digits, white spaces and other characters
#include <stdio.h>
#include<string.h>

void main()
{
    char str[30],ch;
    int i,nwhite=0,ndigits=0,nothers=0;
    while((ch=getchar())!='\n')
    {
        switch(ch)
        {
            case '0' : 
            case '1' :
            case '2' :
            case '3' :
            case '4' :
            case '5' :
            case '6' :
            case '7' :
            case '8' :
            case '9' :
                        ndigits++;
                        break;
            case ' ':
            case '\t':
            case '\n': nwhite++;
                        break;
            default:
                    nothers++;
        }
    }
    printf("Numbers of \ndigits =%d\nWhite spaces=%d \n other characters =%d",ndigits,nwhite,nothers);
}
