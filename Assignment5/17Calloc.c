#include<stdio.h>
#include<stdlib.h>
void main()
{
    int j,n,i,*p;
    printf("Enter the no of Elements: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Insufficient memory");
        return;
    }
    printf("Enter %d elements",n);
    for (i=0;i<n;i++)
       scanf("%d",&p[i]);
    j=0;
    for (i=0;i<n;i++)
     if(p[j]<p[i])
     j=i;
    printf("The biggest element is%d at position %d",p[j],j+1);
    free(p);
}
