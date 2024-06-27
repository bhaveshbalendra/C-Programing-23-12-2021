//C program to check positive negative or zero using simple if statement
#include <stdio.h>

int main()
{
    int num;
    
    //Taking input form the user 
    printf("Enter any number: ");
    scanf("%d", &num);
    
    //Checking the conditions
    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

    return 0;

}

