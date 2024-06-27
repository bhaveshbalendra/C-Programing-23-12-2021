//. Read and print special characters and symbols from keyboard.
#include<stdio.h>  
  
int main()  
{  
    char ch;  
  
    printf("Enter a Special Character\n");  
    scanf("%c", &ch);  
  
     
    if( (ch >= 0  && ch <= 47) ||  
        (ch >= 58 && ch <= 64) ||  
        (ch >= 91 && ch <= 96) ||  
        (ch >= 123 && ch <= 127))  
    {  
        printf("%c is a Special Character\n", ch);  
    }  
    else
    {
        printf("Enter the Special Character and Symbol Only");
    }
    return 0;  
} 