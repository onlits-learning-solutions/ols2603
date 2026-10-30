#include <stdio.h>
int count_factors(int n);   //function declaration/prototype

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (count_factors(n) == 2)      // function call to user-defined function
        printf("%d is a prime number.", n);     // function call to library function
    else
        printf("%d is not a prime number.", n);

    return 0;
}

/*------------- Function Definition ---------------------*/
int count_factors(int n) // Function Header
{       // function body starts
    int fact = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            fact++;
        }
    }

    return fact;
}       // function body ends