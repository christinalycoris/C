#include <stdio.h>
 
int main () {

   int count;
   int x,y,z;

   count=0;
   
   printf("Input start of loop: "); 
   scanf("%d", &x);
   printf("Input end of loop: "); 
   scanf("%d", &y);
   printf("Input step of loop: "); 
   scanf("%d", &z);

   do {
      printf("The number is: %d\n", x);
      x=x+z;
      count++;
   }while( x <= y );
   
   printf("\nThe loop ran %d times.\n", count);
 
   return 0;
}

