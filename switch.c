#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int quote;
    
        printf("\n\tSelect one: "); 
        printf("\n\t\t1. “Hello, Dave.”"); 
        printf("\n\t\t2. “You maniacs! You blew it up! Damn You! God damn you all to hell!!”"); 
        printf("\n\t\t3. “Frankly, my dear, I don't give a damn.”"); 
        printf("\n\t\t4. “I'm going to make him an offer he can't refuse.”"); 
        printf("\n\t\t5. “Toto, I've got a feeling we're not in Kansas anymore.”"); 
        printf("\n\t\t6. “Here's looking at you, kid.”"); 
        printf("\n\t\t7. “Go ahead, make my day.”"); 
        printf("\n\t\t8. “May the Force be with you.”"); 
        printf("\n\n\tYour selection is: "); scanf("%d", &quote);
        
       
        switch(quote) {
            case 1: 
                printf("\t2001: A Space Odyssey, 1968\n"); 
                break;
            case 2:
                printf("\tPlanet of the Apes, 1968\n"); 
                break;
            case 3:
                printf("\tGone With the Wind, 1939\n"); 
                break;
            case 4:
                printf("\tThe Godfather, 1972\n"); 
                break;
            case 5:
                printf("\tThe Wizard of Oz, 1939\n"); 
                break;
            case 6:
                printf("\tCasablanca, 1942\n"); 
                break;
            case 7:
                printf("\tSudden Impact, 1983\n"); 
                break;
            case 8:
                printf("\tStar Wars, 1977\n"); 
                break;
            default:
                printf("Hmm. I don't seem to know that.\n" );
        }

    return 0;
}
