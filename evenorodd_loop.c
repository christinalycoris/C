#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char ans;
    
    printf("This program will determine if the number the user inputs\n");
    printf("into the program is even or odd (or neither). Integers only.\n\n");
    
    printf("Do you want to continue? Y/N    ");
    scanf("%s",&ans);
    
    while ( (ans=='Y')||(ans=='y')||(ans=='YES')||(ans=='Yes')||(ans=='yes') ) {
        printf("Enter an integer: ");
    	scanf("%d",&num);
    
        if (num == 0)
    		printf("%d is an neither even nor odd.\n",num);
        else if ( num%2 == 0 ) 
    		printf("%d is an even integer.\n",num);
        else 
    		printf("%d is an odd integer.\n",num);
    	
    	printf("Do you want to continue? Y/N    ");
    	scanf("%s",&ans);
    }
    if ( (ans=='N')||(ans=='n')||(ans=='NO')||(ans=='No')||(ans=='no') ) {
        printf("Okay. Goodbye. :) \n");
        exit(0);
    }

    return 0;
}

