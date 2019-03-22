#include <stdio.h>

int main()
{
    int i, n; 
    double term1 = 0, term2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("\n\t\t%0.0f", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    
    return 0;
}

