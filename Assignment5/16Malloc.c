#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,*p;
    printf("Enter the no of Elements: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    p=(int*)malloc(n* sizeof(int));
    if(p==NULL)
    {
        printf("Insufficient memory");
        return;
    }
    printf("Enter %d elements",n);
    for (i=0;i<n;i++)
       scanf("%d",p+i);
    printf("The elements are");
    for (i=0;i<n;i++)
    printf("%d",*(p+i));
  
}
