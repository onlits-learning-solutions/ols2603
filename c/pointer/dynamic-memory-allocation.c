#include <stdio.h>

#define N 5

int main(void)
{
    int *arr;

    arr = malloc(sizeof(int) * N);      // dynamic memory allocation

    printf("Enter %d elements below:\n", N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered values are:\n");

    for(int i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}