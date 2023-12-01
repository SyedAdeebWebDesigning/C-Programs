#include <stdio.h>

void callByValue(int num1, int num2)
{
    printf("\nCall by Value\nBefore Swapping\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping\n");
    printf("num1: %d, num2: %d\n", num1, num2);
}

void callByReference(int num1, int num2)
{
    printf("\nCall by Reference\nBefore Swapping\n");
    printf("num1: %d, num2: %d\n", num1, num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping\n");
    printf("num1: %d, num2: %d\n", num1, num2);
}

int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    callByValue(num1, num2);
    callByReference(num1, num2);

    return 0;
}