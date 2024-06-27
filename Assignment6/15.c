/*Program for counting the characters, blanks, tabs, lines in a file*/
#include <stdio.h>
void main()
{
    FILE *fp;
    char file_name[20];
    char ch;
    int char_count = 0;

    int blank_count=0;
    int tab_count=0; 
    int line_count=0;
    printf("Enter the file name"); 
    scanf("%s",file_name);
    fp = fopen(file_name,"r");
    while ((ch= getc(fp)) != EOF)
    {
    	char_count++;
        if (ch == ' ') blank_count++;
        if (ch=='\n') line_count++;
        if (ch=='\t') tab_count++;
    }
    fclose(fp);
    printf("Number of characters =%d\n", char_count);
    printf("Number of tabs =%d\n", tab_count); 
    printf("Number of lines = %d\n",line_count);
    printf("Number of blanks = %d", blank_count);
}
