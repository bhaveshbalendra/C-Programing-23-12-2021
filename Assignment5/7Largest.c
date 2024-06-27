//function returning pointers
#include<stdio.h>
void main()
{
    int x,y,*big;
    printf("Enter the values of x and y: ");
    scanf("%d%d",&x,&y);

    big = largest(&x,&y);
    printf("Max(%d,%d) : %d",x,y,*big);
   

}
int largest(int*a,int*b)
{
    if(*a>*b)
    {
        return  a ;

    }
    else
        return b;
}