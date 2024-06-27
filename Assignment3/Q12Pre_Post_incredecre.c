//Program for Usage of Pre/Post Increment/Decrement operators.
#include<stdio.h>
 int main()
    {
        int a, b, x = 52;
        a = ++x; /* a and x are 53 */
        b = x++; /* b is 53, x is 54 */
        a = x--; /* a is is 54, x is 53 */
        b = --x; /* b and x are 52 */
        
        return 0;
    }