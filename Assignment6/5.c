/* Program to access various members of a structure*/
#include <stdio.h>
void main()
{
    typedef struct
    {
		int marks;
        char grade;
        float percentage;
    } STUDENT;
    
    STUDENT x;

    x.marks = 100;
    x.grade = 'A';
    x.percentage = 99.5;
    
    printf("Grade: %c\n",x.grade); 
    printf("Marks: %d\n",x.marks); 
    printf("Percentage: %f\n", x.percentage);
}
