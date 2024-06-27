//Evaluate Series 1-x+(x2/2!)- (x3/3!)+ (x4/4!)+….n terms
#include<stdio.h>
#include<conio.h>
#include<math.h>
    void main()
    {
        long int n, s=1 , f=1, i , sign = 1 , x,j;
         printf ("Enter number of terms\n");
         scanf ("%d",&n);
         printf ("Enter value of x\n");
         scanf ("%d",&x);
         for ( i=1 ; i <= n ; i++)
          {
             for ( j=1 ; j<=i ; j++)
             {
                 f = f*i;

             }
             sign = sign*(-1);
             s = s - sign * pow(x,i)/f;
             f = 1;
          }
        printf ("%d is a sum of series",s);
        getch();  
    }