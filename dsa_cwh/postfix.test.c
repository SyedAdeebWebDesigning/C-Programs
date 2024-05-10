#include <stdio.h>

void add();
void sub();
void mul();
void div();
void expo();

int stack[10], top = -1;

int main()
{
    char expression[20]; // = "23*54*+9-";
    printf("Enter the postfix expression: ");
    scanf("%[^\n]s", expression);
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] != ' ')
        {
            switch (expression[i])
            {
            case '+':
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
                mul();
                break;
            case '/':
                div();
                break;
            case '^':
                expo();
                break;
            default:
                top++;
                stack[top] = expression[i];
            }
        }
    }
    printf("Result: %d\n", stack[top]);
    return 0;
}

void add()
{
    int op1, op2, res;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op1 + op2;
    top++;
    stack[top] = res;
}

void sub()
{
    int op1, op2, res;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 - op1;
    top++;
    stack[top] = res;
}

void mul()
{
    int op1, op2, res;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op1 * op2;
    top++;
    stack[top] = res;
}

void div()
{
    int op1, op2, res;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    res = op2 / op1;
    top++;
    stack[top] = res;
}

void expo()
{
    int op1, op2, res = 1;
    op1 = stack[top];
    top--;
    op2 = stack[top];
    top--;
    for (int i = 0; i < op1; i++)
        res = res * op2;

    top++;
    stack[top] = res;
}