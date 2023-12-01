#include <stdio.h>

int main()
{
    char operator;
    double operand1, operand2, result;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &operand1, &operand2);
    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", operand1, operand2, result);
        break;
    case '-':
        result = operand1 - operand2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", operand1, operand2, result);
        break;
    case '*':
        result = operand1 * operand2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", operand1, operand2, result);
        break;
    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
            printf("Result: %.2lf / %.2lf = %.2lf\n", operand1, operand2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    case '%':
        if ((int)operand2 != 0)
        {
            result = (int)operand1 % (int)operand2;
            printf("Result: %.2lf %% %.2lf = %.2lf\n", operand1, operand2, result);
        }
        else
        {
            printf("Error: Modulo by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        break;
    }

    return 0;
}
