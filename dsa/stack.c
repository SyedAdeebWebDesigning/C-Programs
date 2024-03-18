/**
 * @file stack.c
 * @brief Implementation of a stack data structure in C.
 * @author Syed Adeeb
 */

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

struct Stack
{
    int items[STACK_SIZE];
    int top;
};
typedef struct Stack st;

/**
 * @brief Creates an empty stack.
 *
 * @param s Pointer to the stack.
 */
void createEmptyStack(st *s)
{
    s->top = -1;
}

/**
 * @brief Checks if the stack is full.
 *
 * @param s Pointer to the stack.
 * @return 1 if the stack is full, 0 otherwise.
 */
int isFull(st *s)
{
    if (s->top == STACK_SIZE - 1)
        return 1;
    else
        return 0;
}

/**
 * @brief Checks if the stack is empty.
 *
 * @param s Pointer to the stack.
 * @return 1 if the stack is empty, 0 otherwise.
 */
int isEmpty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

/**
 * @brief Pushes an item onto the stack.
 *
 * @param s Pointer to the stack.
 * @param newitem The item to be pushed onto the stack.
 */
void push(st *s, int newitem)
{
    if (isFull(s))
    {
        printf("STACK FULL");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}

/**
 * @brief Pops an item from the stack.
 *
 * @param s Pointer to the stack.
 * @param newitem The item to be popped from the stack.
 */
void pop(st *s, int newitem)
{
    if (isEmpty(s))
    {
        printf("STACK EMPTY");
    }
    else
    {
        printf("Items Popped: %d", s->items[s->top]);
        s->top--;
    }
}

/**
 * @brief Prints the elements of the stack.
 *
 * @param s Pointer to the stack.
 */
void printStack(st *s)
{
    if (isEmpty(s))
    {
        printf("STACK EMPTY");
    }
    else
    {
        printf("Stack: ");
        for (int i = 0; i <= s->top; i++)
        {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

/**
 * @brief The main function.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    pop(s, 4);
    printf("\nAfter popping out\n");
    printStack(s);

    return 0;
}