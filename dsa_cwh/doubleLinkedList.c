#include <stdio.h>
#include <stdlib.h>

void clearScreen()
{
#ifdef _WIN32
    system("cls"); // For Windows
#else
    system("clear"); // For Linux and macOS
#endif
}

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *displayForward(struct node *head)
{
    struct node *ptr = head;
    printf("\n");
    while (ptr != NULL)
    {
        printf("[ %p | %d | %p ] --> ", ptr->prev, ptr->data, ptr->next);
        ptr = ptr->next;
    }
    printf("NULL\n");
    return head;
}

struct node *displayBackward(struct node *head)
{
    struct node *ptr = head;
    printf("\n");
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    while (ptr != NULL)
    {
        printf("[ %p | %d | %p ] --> ", ptr->prev, ptr->data, ptr->next);
        ptr = ptr->prev;
    }
    printf("NULL\n");
    return head;
}

int main()
{
    clearScreen();
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 0;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 4;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 6;
    fourth->next = NULL;

    head = displayForward(head);
    head = displayBackward(head);

    return 0;
}