#include <stdio.h>
#include <math.h>

int main()
{
	int operation;
	int a,b;
	double c;

		printf("\nThis will compute addition, "); 
		printf("\nsubtraction, multiplication, "); 
		printf("\nand division.\n"); 

		printf("\nIt reads integers from user.\n"); 

		printf("Input first number (A): "); 
		scanf("%d", &a);
		printf("Input second number (B): "); 
		scanf("%d", &b);

		c=a+b; 
		printf("\t\t\t\t %d + %d = %0.2f\n", a,b,c);

		c=b-a; 
		printf("\t\t\t\t %d - %d = %0.2f\n", b,a,c);

		c=a-b; 
		printf("\t\t\t\t %d - %d = %0.2f\n", a,b,c);

		c=a*b; 
		printf("\t\t\t\t %d × %d = %0.2f\n", a,b,c);

		c=(double)b/a; 
		printf("\t\t\t\t %d ÷ %d = %0.2f\n", b,a,c);

		c=(double)a/b; 
		printf("\t\t\t\t %d ÷ %d = %0.2f\n", a,b,c);

    return 0;
}

