#include <stdio.h>

int main()
{

    float tax = 0, income;
    printf("enter your income\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
        printf("your tax that should be paid is %f\n", &tax);
    }
    else
    {
        printf("not applicable/n");
    }

    return 0;
}