#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void printPascalTriangle(int n)
{
    for (int line = 0; line < n; line++)
    {
        for (int space = 0; space < n - line - 1; space++)
        {
            printf(" ");
        }

        for (int i = 0; i <= line; i++)
        {
            int coef = factorial(line) / (factorial(i) * factorial(line - i));
            printf("%d ", coef);
        }

        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);
    printPascalTriangle(n);
    return 0;
}
