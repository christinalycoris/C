#include <stdio.h> 

int main() 
{ 
	int i,j,n,k,count,sum;
	int onedimo[5] = { 10, 20, 30, 40, 50 }; 
	int onedimt[10] = {2,6,1,8,9,3,4,7,5,10};
	int twodimo[2][3] = 
		{{ 2,3,8 },
		{ 4,7,5 }}; 
	int twodimt[2][4] = { 10, 11, 12, 13, 14, 15, 16, 17};
	int twodimr[3][4] = { 31,22,63, 86,95,20, 23,73,28, 12,74,54};

	int *ptr = &twodimo[0][0];
	int ROWS = 2, COLS = 3;

	printf("\n%d %d %d %d %d\n", 
		onedimo[0],onedimo[1],onedimo[2],onedimo[3],onedimo[4]);

	printf("\n");

	for ( j = 0; j < 10; j++ )
		printf("[%d] %d    ", j, onedimt[j]); 

	printf("\n");
	printf("\n");

	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%d ", *(ptr + i * COLS + j));
		}
		printf("\n");
	}
	
	printf("\n");

	printf("%d %d %d %d \n%d %d %d %d\n", 
		twodimt[0][0],twodimt[0][1],twodimt[0][2],twodimt[0][3],
		twodimt[1][0],twodimt[1][1],twodimt[1][2],twodimt[1][3]);

	printf("\n");
	
	printf("[ROW][COL]:NUM\n");
	for (i=0;i<3;i++) {
		for (j=0;j<4;j++) {
			printf("[%d][%d]:%d  ",i,j,twodimr[i][j]);
		}
		printf("\n");
	}

	return 0; 
} 

