#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Enter number 1: ");
    scanf("%f", &num1);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nChoose the operator(1,2,3,4): ");
    scanf("%d", &choice);

    printf("Enter number 2: ");
    scanf("%f", &num2);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;

    case 2:
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;

    case 3:
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;

    case 4:
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;

    default:
        printf("Please choose the correct operator\n");
    }
    return 0;
}