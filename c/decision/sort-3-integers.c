#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("The integers in ascending order are: ");
    if(a < b && b < c)
        printf("%d, %d, %d", a, b, c);
    else if(a < c && c < b)
        printf("%d, %d, %d", a, c, b);
    else if(b < a && a < c)
        printf("%d, %d, %d", b, a, c);
    else if(b < c && c < a)
        printf("%d, %d, %d", b, c, a);
    else if(c < a && a < b)
        printf("%d, %d, %d", c, a, b);
    else if(c < b && b < a)
        printf("%d, %d, %d", c, b, a);

    return 0;
}