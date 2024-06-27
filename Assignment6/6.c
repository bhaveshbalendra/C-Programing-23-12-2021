/*  C program to read n numbers from keyboard and write into a file*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    int num;
    fp = fopen("input.dat", "w"); 	// Open the file in write mode
    if (fp==NULL) 
    {
        printf("Error in opening the file\n"); 
        exit(0);
    }
    while (scanf("%d", &num) != EOF)
    {
        fprintf(fp,"%d\n", num);
    }
fclose(fp);
}
