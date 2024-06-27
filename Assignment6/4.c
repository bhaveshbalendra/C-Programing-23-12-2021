/*Program to access various members of a union*/
#include <stdio.h>
void main()
{
    typedef union
    {
        int marks;
        char grade;
        float percentage;
    } STUDENT;

STUDENT x;
x.marks  = 100;
printf("Marks : %d\n", x.marks);
x.grade = 'A';
printf("Grade: %c\n", x.grade);
x.percentage=99.5;
printf("Percentage: %f \n", x.percentage);

}
