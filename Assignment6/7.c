/*A program to read n numbers from input file and display on the screen */
#include<stdio.h>
void main()
{
    FILE *fp;
    int num;
    fp= fopen("input.dat", "r"); 	
    if (fp== NULL)
    {	
        printf("Error in opening the file\n"); 
        exit(0);
    }
    while (fscanf(fp,"%d", &num) > 0)
    {
    printf("%d\n", num);		
	}
    fclose(fp);
}
