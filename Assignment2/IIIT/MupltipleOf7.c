#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);

    if (num % 7 == 0)
    {
        printf(" Yes %d  is Multiple of 7",num);
    }
    else
    {
        printf(" No %d  is not the Multiple of 7",num);
    }
    return 0;
}
