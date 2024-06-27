/*Program to simulate the multiplication of two fractions*/

#include <stdio.h>

typedef struct
{
    int n; /*Numerator*/
    int d; /*Denominator*/
} FRACTION;

void main()
{
    FRACTION a, b, c;
    printf("Enter fraction 1 in the form x/y: ");
    scanf("%d/%d", &a.n, &a.d);
    printf("Enter the fraction 2 in the form x/y: ");
    scanf("%d/%d", &b.n, &b.d);

    c.n = a.n * b.n;
    c.d = a.d * b.d;
    printf("%d / %d * %d/%d  = %d / %d \n", a.n, a.d, b.n, b.d, c.n, c.d);
}
