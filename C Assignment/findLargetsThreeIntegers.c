#include <stdio.h>

int main()
{
    int i, j, k;
    printf("Enter the value of first number: ");
    scanf("%d", &i);

    printf("Enter the value of second number: ");
    scanf("%d", &j);

    printf("Enter the value of third number: ");
    scanf("%d", &k);

    if (i > j && i > k)
    {
        printf("Number %d is greater\n", i);
    }
    else if (j > i && j > k)
    {
        printf("Number %d is greater\n", j);
    }
    else if (k > j && k > i)
    {
        printf("Number %d is greater\n", k);
    }
    else
    {
        printf("All numbers are equal\n");
    }

    return 0;
}