/*Program to read, display student details using arrays inside structures.*/

#include <stdio.h>
typedef struct
{
    char 	name[10];			
    int 	usn;				
    int 	marks[3];			
} STUDENT;
void main()
{
    STUDENT s;

/*  To read student details */
    printf("Name = ");
    scanf("%s", s.name);

    printf("USN = ");
    scanf("%d", &s.usn);

    printf("marks1 = ");
    scanf("%d", &s.marks[0]);

    printf("marks2 = ");
    scanf("%d",&s.marks[1]);

    printf("marks3 = ");
    scanf("%d",&s.marks[2]);

        /*To display student details*/

    printf("Name = %s\n", s.name);
    printf("USN = %d\n", s.usn);
    printf("marks1 = %d\n", s.marks[0]);
    printf("marks2 = %d\n", s.marks[1]);
    printf("marks3 = %d\n", s.marks[2]);
}
