//program to compute largest elemnt and its position
#include<stdio.h>
void main()
{
    int a[10],n,i,big,pos;
    printf("Enter the two Elements: ");
    scanf("%d",&n);
    printf("Enter the element");
    for (i=0;i<n;i++)
       scanf("%d",&a[i]);
    big = a[0];
    pos = 0;
    for (i=0;i<n;i++)
     if(big<a[i])
     {
         big = a[i];
         pos = i;
     }
    printf("The Largest element is= %d",big);
    printf("Its positon is %d",pos);

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


