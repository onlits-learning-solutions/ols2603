#include <stdio.h>

int main(void)
{
    int bs, da, hra, gs;
    printf("Enter Ramesh's Basic Salary: ");
    scanf("%d", &bs);
    da = bs * 40 / 100;
    hra = bs * 20 / 100;
    gs = bs + da + hra;
    printf("Ramesh's Gross Salary is: %d.", gs);
    return 0;
}
