#include<stdio.h>
int main()
{
   int score;

   printf("Enter score: ");
   scanf("%d", &score);

   switch( score / 10 )
   {

   case 10:
   case 9:
     printf("Grade: A");
     break;

   case 8:
     printf("Grade: B");
     break;

   case 7:
     printf("Grade: C");
     break;

   case 6:
     printf("Grade: D");
     break;

   case 5:
     printf("Grade: E");
     break;
   case 4:
      printf("Grade:F");
      break;

   default:
     printf("You Enter the Wrong");
     break;

   }

   return 0;
}
