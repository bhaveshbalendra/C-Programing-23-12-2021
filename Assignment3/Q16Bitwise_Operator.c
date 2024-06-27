//Usage of Bit-wise operators & (Bit-wise AND),
// | (Bit-wise OR),
 //^ (Bit-wise exclusive OR), ~ (Bitwise complement
#include <stdio.h>
int main()
{  //Bitwise AND
    int a = 14, b = 26;
    printf("Output = %d\n", a&b);
    
    //Bitwise OR
    int a1 = 12, b1 = 24;
    printf("Output = %d\n", a1|b1);
    
    //Bitwise XOR
    int a2 = 13, b2 = 23;
    printf("Output = %d\n", a2^b2);
    
    //Bitwise complement
    printf("Output = %d\n",~36);
    printf("Output = %d\n",~-12);
    
    //Bitwise Shif rigth and left
    int num=220, i;
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);    
    
     return 0;
}
