/*A C program to read student roll no  and usn from two different files and write into a different file in the sequence*/

#include <stdio.h>
void main()
{
    FILE *fp1, *fp2, *fp3; 
    int rno;
    int usn;
    fp1 = fopen("studentno.txt", "r");    // Open the name file in read mode
    fp2= fopen("usn.txt", "r"); 	      // Open the usn file in read mode
    fp3= fopen("output.txt", "w");        // Open the file in write mode
    for(;;)
    {
        if (fscanf(fp1, "%d", &rno) > 0)// read name from 1st file
        {
            if (fscanf(fp2, "%d", &usn) > 0) // read name from 2nd file
            {
                fprintf(fp3,"%d %d\n", rno, usn); // write to 3rd file
            } 
            else 
                break;
        }
        else 
            break;
    }
/* close all the files */
fclose(fp1);
fclose(fp2);
fclose(fp3);
}
