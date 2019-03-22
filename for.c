#include <stdio.h>
 
int main () 
{

    int i,count,sum;
    int x,y;
    
    count=0;
    sum=0;

    printf("Input X: "); 
    scanf("%d", &x);
    printf("Input Y: "); 
    scanf("%d", &y);

    for( i = x; i <= y; i++ ){
        printf("The value of X is %d\n", x);
        sum=sum+x;
        x++;
        count++;
    }
    
    printf("Loop ran %d times.\n", count);
    printf("Sum of all integers is %d.\n", sum);
    

    return 0;
}
