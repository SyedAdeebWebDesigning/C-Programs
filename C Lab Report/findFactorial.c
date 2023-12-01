#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        long long factorial = 1;

        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }

        printf("The factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}
