#include <stdio.h>

int main()
{
    int amount;
    int note500, note200, note20, note5, note2;
    
    
    note500 = note200  = note20  = note5 = note2 = 0;


    
    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 200)
    {
        note200 = amount/200;
        amount -= note200 * 200;
    }
    
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    

    
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("200 = %d\n", note200);
    printf("20 = %d\n", note20);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);

    return 0;
}