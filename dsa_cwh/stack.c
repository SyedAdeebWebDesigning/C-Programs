#include <stdio.h>
#include <stdlib.h>

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}

struct stack *display(struct stack *ptr)
{
    printf("\n");
    if (!isEmpty(ptr))
        printf("| %d |\t<----top", ptr->arr[ptr->top]);
    else
        printf("Empty Stack");
    printf("\n");
    for (int i = ptr->top - 1; i >= 0; i--)
    {
        printf("| %d | \n", ptr->arr[i]);
    }
    printf("------\n");
    return ptr;
}

struct stack *push(struct stack *ptr, int data)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {

        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
    return ptr;
}

struct stack *pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow\n");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("Popped element: %d\n", val);
    }
    return ptr;
}

int main()
{
    clearScreen();
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    display(s);
    pop(s);
    pop(s);
    display(s);

    return 0;
}