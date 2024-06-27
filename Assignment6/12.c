/* A program to read from a file and write into three different files*/
#include <stdio.h>
void main()
{
    FILE *fp1, *fpa, *fpb;
    char str[80]; 
    char *ps;
    fp1 = fopen("input.dat", "r");   //input.dat   any text information
    fpa=fopen("out1.dat", "w");
    fpb= fopen("out2.dat", "w");
    while ((ps=fgets(str, 80, fp1)) != NULL)
    {
    	if(*ps == 'a')
            fputs(ps,fpa);
        else if(*ps == 'b')
    	    fputs(ps,fpb);
        else
            fputs(ps, stdout);
	}
}

