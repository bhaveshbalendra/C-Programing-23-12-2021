/*10-14.14C Program to concatenate two input files*/
#include <stdio.h>
//#include <process.h>
void main() 
{                       // 3 file to create
    FILE *fp1;        //input1.txt   IIIT
    FILE *fp2;          //input1.txt   Naya Raipur
    FILE *fp3;          //out1.txt

    char file1[20]; 
    char file2[20];
    char file3[20];
    char ch;
    
    printf("Enter the first file\n");
    scanf("%s", file1); 
    fp1= fopen(file1,"r");  
    printf("Enter the second file\n");
    scanf("%s", file2);
    fp2= fopen(file2,"r");
    printf("Enter the third file\n");
    scanf("%s",file3);
    fp3= fopen(file3,"w");
    while ((ch=getc(fp1)) != EOF) 
    putc(ch,fp3);
    while ((ch = getc(fp2)) != EOF) 
    putc(ch,fp3);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
