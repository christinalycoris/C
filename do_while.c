#include <stdio.h>
 
int main () {

   int count;
   int x,y;

   count=0;
   
   printf("Input start of loop: "); 
   scanf("%d", &x);
   printf("Input end of loop: "); 
   scanf("%d", &y);

   do {
      printf("The number is: %d\n", x);
      x++;
      count++;
   }while( x <= y );
   
   printf("\nThe loop ran %d times.\n", count);
 
   return 0;
}

