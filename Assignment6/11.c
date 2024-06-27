/* Program to read and write using using fgets and fputs respectively.*/
#include <stdio.h>
void main()
{
    char str[15];
    char *ps;
    printf("Enter few lines till EOF \n");  
    ps=fgets(str,10,stdin);
    while (ps != NULL)
    {
        fputs(str, stdout); 
        ps=fgets(str, 10, stdin);
    }
}
