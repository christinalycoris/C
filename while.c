#include <stdio.h>

int main()
{
	int count=1;
	int num;

	printf("Input number: ");
	scanf("%d",&num);

	while (count <= num) {
		printf("%d ", count);
		count++;
	}

	return 0;
}

