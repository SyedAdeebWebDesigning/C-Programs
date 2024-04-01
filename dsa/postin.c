/**
 * @file postin.c
 * @brief This program evaluates a postfix expression using a stack.
 */

#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 50

int stack[MAX_SIZE];
int top = -1;

/**
 * @brief Pushes an item onto the stack.
 *
 * @param item The item to be pushed onto the stack.
 */
void push(int item)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack is full. Cannot push.\n");
        return;
    }
    stack[++top] = item;
}

/**
 * @brief Pops an item from the stack.
 *
 * @return The popped item.
 */
int pop()
{
    if (top == -1)
    {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    return stack[top--];
}

/**
 * @brief Main function.
 *
 * @return 0 on success, 1 on failure.
 */
int main()
{
    char pofx[50], ch;
    int i = 0, op1, op2;
    printf("Enter the postfix expression: ");
    scanf("%s", pofx);
    while ((ch = pofx[i++]) != '\0')
    {
        if (isdigit(ch))
        {
            push(ch - '0');
        }
        else
        {
            op2 = pop();
            op1 = pop();
            switch (ch)
            {
            case '+':
                push(op1 + op2);
                break;
            case '-':
                push(op1 - op2);
                break;
            case '*':
                push(op1 * op2);
                break;
            case '/':
                push(op1 / op2);
                break;
            default:
                printf("Invalid operator\n");
                return 1;
            }
        }
    }
    printf("Result: %d\n", pop());
    return 0;
}