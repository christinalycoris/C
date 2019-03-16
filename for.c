#include <stdio.h>
 
int main () 
{

    int i,count;
    int x,y;

    printf("Input X: "); 
    scanf("%d", &x);
    printf("Input Y: "); 
    scanf("%d", &y);

    for( i = x; i <= y; i++ ){
        printf("The value of X is %d\n", x);
        x++;
        count++;
    }
    
    printf("Loop ran %d times.\n", count);
    

    return 0;
}

