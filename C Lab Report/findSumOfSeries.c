#include <stdio.h>

int main()
{
    int num;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        result = 1.0 / num;
    }

    printf("%.2f\n", result);
    return 0;
}