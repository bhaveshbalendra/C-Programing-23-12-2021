//Convert a given character into its lower to upper, vice versa
#include<stdio.h>
#include<string.h>

int main()
{
        char str[20];
        int i;
        printf("\nEnter any string: ");
        gets(str);

        printf("\nThe input String is: [ %s ]\n",str);
        for(i=0;i<=strlen(str);i++)
    {
                if(str[i]>=97&&str[i]<=122)
                        str[i]=str[i]-32;
                else if(str[i]>=65&&str[i]<=90)
                        str[i]=str[i]+32;
                else;
        }
        printf("\nThe Converted String is :[ %s ]\n",str);

        return 0;
}