#include <stdio.h>
 
int main () {

	int count,sum;
	int x,y,z;

	count=0;
	sum=0;

	printf("Input start of loop: "); 
	scanf("%d", &x);
	printf("Input end of loop: "); 
	scanf("%d", &y);
	printf("Input step of loop: "); 
	scanf("%d", &z);

	if (x <= y) {
		do {
			printf("The number is: %d\n", x);
			sum=sum+x;
			x=x+z;
			count++;
		}while( x <= y );
	}
	else {
		do {
			printf("The number is: %d\n", x);
			sum=sum+x;
			x=x+z;
			count++;
		}while( x >= y );
	}

	printf("\nThe loop ran %d times.\n", count);
	printf("The total of all the listed numbers is %d.\n", sum);
 
	return 0;
}

