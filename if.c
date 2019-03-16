#include <stdio.h>	

int main()
{
    int grade;

    printf( "Please enter your grade: " );
    scanf( "%d", &grade );
    
    if ( grade < 60 ) {
        printf ("You have a 'F' in this course.\t :(\n" );
    }
    else if ( grade < 70 ) {
        printf( "You have a 'D' in this course.\n" ); 
    }
    else if ( grade < 80 ) {
        printf( "You have a 'C' in this course.\n" );  
    }
    else if ( grade < 90 ) {
        printf( "You have a 'B' in this course.\n" );       
    }
    else {
        printf( "You have an 'A' in this course.\t :)\n" );
    }
    
  return 0;
}

