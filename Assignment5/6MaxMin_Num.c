//program to print both maximum and minimum of two numbers
#include<stdio.h>
void main()
{
    int m,n,big,small;
    printf("Enter the two values: ");
    scanf("%d%d",&m,&n);

    maxmin(m,n,&big,&small);
    printf("Largest = %d",big);
    printf("smallest = %d",small);

}
void maxmin(int a,int b,int *max,int *min)
{
    if(a>b)
    {
        *max=a,*min=b;
        return ;

    }
    *max=b,*min=a;
}