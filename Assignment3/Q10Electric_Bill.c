// Find electricity bill amount of an institute

#include <stdio.h>

int main()
{
    int unit;
    float amt;

    /* Input unit consumed from user */
    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    /* Calculate electricity bill according to given conditions */
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(50< unit < 150)
    {
        amt = unit* 0.75;
    }
    else if(150<= unit < 250)
    {
        amt = unit * 1.20;
    }
    else
    {
        amt = unit * 1.50;
    }

    printf("Electricity Bill = Rs. %.2f",amt);

    return 0;
}