#include <stdio.h>
int main()
{
   int Grades;
   printf("Enter the Score in Subject:");
   scanf("%d", &Grades);

if (Grades >= 90)
{
   printf("Your Score is %d in subject And Your Grades is A:", Grades);
}

else if (89 >= Grades >= 80)
{
   printf("Your Score is %d in subject And Your Grades is B:", Grades);
}

else if (79 >= Grades >= 70)
{
   printf("Your Score is %d in subject And Your Grades is C:", Grades);
}

else if (69 >= Grades >= 60)
{
   printf("Your Score is %d in subject And Your Grades is D:", Grades);
}

else if (59 >= Grades >= 50)
{
   printf("Your Score is %d in subject And Your Grades is E:", Grades);
}
else if (Grades <= 50)
{
   printf("Your Score is %d in subject And Your Grades is F:", Grades);
}

return 0;
}
