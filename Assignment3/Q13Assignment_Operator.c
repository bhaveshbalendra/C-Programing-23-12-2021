// Usage of Assignment operators =, +=, -=, *=, /=, %=. (a/=b refers a=a/b).
#include <stdio.h>

int main() {

   int a = 11;
   int b ;

   b =  a;
   printf("= Operator %d\n", b );

   b +=  a;
   printf(" += Operator %d\n", b );

   b -=  a;
   printf("-= Operator %d\n", b );

   b *=  a;
   printf("*= Operator %d\n", b );

   b /=  a;
   printf("/= Operator %d\n", b );

   b  = 100;
   b %=  a;
   printf("%= Operator %d\n", b );

   b <<=  1;
   printf("<<= Operator %d\n", b );

   b >>=  1;
   printf(">>= Operator %d\n", b );

   b &=  1;
   printf(" &= Operator %d\n", b );

   b ^=  1;
   printf("^= Operator %d\n", b );

   b |=  1;
   printf("|= Operator  %d\n", b );
}