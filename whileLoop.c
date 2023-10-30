#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    printf("Enter the number to find the table: ");
    scanf("%d", &num);
    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}