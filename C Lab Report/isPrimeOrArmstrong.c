#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%p is not a prime number\n", &num);
            break;
        }
        else
        {
            printf("%p is a prime number\n", &num);
            break;
        }
    }
    int sum = 0, temp;
    temp = num;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("%d is an Armstrong number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}