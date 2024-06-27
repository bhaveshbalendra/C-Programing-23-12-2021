#include <stdio.h>
int main() {
   int Grades;
   printf("Enter the Grades: ");
   scanf("%d", &Grades);

   if (Grades >= 90) {
      printf("%d Your Grades is A:", Grades);
   }

   else if (89>=Grades >= 80) {
      printf("%d Your Grades is B:", Grades);
   }
  
    else if (79>=Grades >= 70) {
      printf("%d Your Grades is C:", Grades);
   }
 
   else if (69>=Grades >= 60) {
      printf("%d Your Grades is D:", Grades);
   }
     
   else if (59>=Grades >= 570) {
      printf("%d Your Grades is E:", Grades);
   }
   else if (Grades<=50) {
      printf("%d Your Grades is F:", Grades);
   }
 
 
 

   return 0;
}
