//Program to demonstrate string comparison for n characters
#include <stdio.h>
#include<string.h>

void main()
{
    char str[10]="strange";
    
    
    if(strncmp(&str[2],"ran",3)==0)
        printf("\nThe string ran is found in positin 2");
    else
        printf("\nThe string ran is not found");
}
