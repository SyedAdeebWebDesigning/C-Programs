#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Not a prime number
    }

    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}

int main()
{
    int start = 50;
    int end = 100;

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; ++i)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
