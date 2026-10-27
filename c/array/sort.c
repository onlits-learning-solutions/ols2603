#include <stdio.h>

#define MAX 100

int main(void)
{
    int num[MAX], n;

    printf("Enter list size: ");
    scanf("%d", &n);

    printf("Enter %d integers below:\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("[%d] ", i);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    printf("The sorted list is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("[%d] %d\n", i, num[i]);
    }

    return 0;
}