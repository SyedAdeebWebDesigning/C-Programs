// Program to check whether the number is Even or Odd
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Number %d is Even ", number);
    }
    else
    {
        printf("Number %d is Odd ", number);
    }
    return 0;
}
̃̃̃̃