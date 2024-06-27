// Addition of first-digit and last-digit of a three digit number
#include <stdio.h>
int firstDigit(int n)
{
    //Remove last digit from number
    //till only one digit is left
    while (n >= 10)
        n /= 10;
    //Return the first digit
    return n;
}
int lastDigit(int n)
{
    //Return the last digit
    return (n % 10);
}
int main()
{
    int n, sum = 0, firstDigit, lastDigit,digit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    //Find last digit of a number
    lastDigit = n % 10;
    //Find total number of digit - 1
    digit = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digit));
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}