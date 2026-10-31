#include <stdio.h>

int main(void)
{
    int a, b, c;        // Static memory allocation
    int *x = &a, *y = &b, *z = &c;

    printf("Memory addresses of x, y and z are %p, %p and %p, respectively\n", x, y, z);

    printf("Enter a number: ");
    scanf("%d", x);
    printf("Enter another number: ");
    scanf("%d", y);

    *z = *x + *y;

    printf("The sum is %d.", *z);

    return 0;
}