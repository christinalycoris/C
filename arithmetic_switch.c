#include <stdio.h>

int main()
{
	int operation;
	float a,b;
	double c;

		printf("\n\tSelect operation: "); 
		printf("\n\t\t1. Addition "); 
		printf("\n\t\t2. Subtraction (A from B) "); 
		printf("\n\t\t3. Subtraction (B from A) "); 
		printf("\n\t\t4. Multiplication "); 
		printf("\n\t\t5. Division (A into B) "); 
		printf("\n\t\t6. Division (B into A) "); 
		printf("\n\n\tYour selection is: "); 
		scanf("%d", &operation);

		printf("\n\tInput first number (A): "); 
		scanf("%f", &a);
		printf("\tInput second number (B): "); 
		scanf("%f", &b);

		switch(operation) {
			case 1: 
				c=a+b; 
				printf("\t\t\t\t %0.2f + %0.2f = %0.2f\n", a,b,c); 
				break;
			case 2: 
				c=b-a; 
				printf("\t\t\t\t %0.2f - %0.2f = %0.2f\n", b,a,c); 
				break;
			case 3: 
				c=a-b; 
				printf("\t\t\t\t %0.2f - %0.2f = %0.2f\n", a,b,c); 
				break;
			case 4: 
				c=a*b; 
				printf("\t\t\t\t %0.2f × %0.2f = %0.2f\n", a,b,c); 
				break;
			case 5: 
				c=b/a; 
				printf("\t\t\t\t %0.2f ÷ %0.2f = %0.2f\n", b,a,c); 
				break;
			case 6: 
				c=a/b; 
				printf("\t\t\t\t %0.2f ÷ %0.2f = %0.2f\n", a,b,c); 
				break;
			default: 
				printf("\n\tHmm. I don't seem to know that.\n" );
		}

    return 0;
}

