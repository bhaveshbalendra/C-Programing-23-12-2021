//Display numbers of days present in a given month.
#include<stdio.h> 
int main()
{
    int month, year;
    printf("enter the month : ");
    scanf("%d",&month);
    printf("enter the year : ");
    scanf("%d",&year);
    if(((month==2) && (year%400==0)) || ((year%100!=0)&&(year%4==0)))
    {
        printf("Number of days is 29");
    }
    else if(month==2)
    {
        printf("Number of days is 28");
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("Number of days is 31");
    }
    else
    {
        printf("Number of days is 30");
    }
    return 0;
}