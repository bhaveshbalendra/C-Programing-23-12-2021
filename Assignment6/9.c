/*A C program to read a line from the keyboard using the function fgets*/
#include <stdio.h>
void main() 
{
    char str[15];
    char *ps;
    printf("Enter the string \n"); 
    ps=fgets(str, 10, stdin); 
    if (ps != NULL)
    {
        printf("The string is :");
        puts(str);
        return;
    }
    else 
    printf("Reading is unsuccessful\n");
}
