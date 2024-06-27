#include <stdio.h>
int main() {
   int Num;
   printf("Enter The Number: ");
   scanf("%d", &Num);

   if (Num==1) {
      printf("The Day is Monday:");
   }
    
	else if (Num==2) {
    printf("The Day is Tuesday:");
   }
      else if (Num==3) {
    printf("The Day is Wednesday:");
   }
      else if (Num==4) {
    printf("The Day is Thursday:");
   }
     
	    else if (Num==5) {
    printf("The Day is Friday:"); }
   
      else if (Num==6) {
    printf("The Day is Saturday:");}
    
       else if (Num==7) {
    printf("The Day is Sunday:"); 
	}
   
   return 0;
}
