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
    int data;
    struct node *next;
};

struct node *display(struct node *head)
{
    struct node *ptr = head;
    printf("\n");
    do
    {
        printf("[ %d | %p ] --> ", ptr->data, ptr->next);
        ptr = ptr->next;
    } while (ptr != head);
    printf("[ %d | %p ] ... \n  ", ptr->data, ptr->next);
    printf("\n");
    return head;
}

struct node *insertAtStart(struct node *head, int data)
{
    printf("---------- INSERT AT START ----------\n");
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

struct node *insertAtBetween(struct node *head, int data, int index)
{
    printf("---------- INSERT AT BETWEEN ----------\n");
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    if (index == 0)
    {
        head = insertAtStart(head, data);
        return head;
    }

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    printf("---------- INSERT AT END ----------\n");
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct node *deleteFromStart(struct node *head)
{
    printf("---------- DELETE FROM START ----------\n");
    struct node *p = head;
    do
    {
        p = p->next;
    } while (p->next != head);
    p->next = head->next;
    free(head);
    head = p->next;
    return head;
}

struct node *deleteFromBetween(struct node *head, int index)
{
    printf("---------- DELETE FROM BETWEEN ----------\n");
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteFromEnd(struct node *head)
{
    printf("---------- DELETE FROM END ----------\n");
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    clearScreen();
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = head;

    display(head);

    head = insertAtStart(head, 9);
    display(head);

    head = insertAtBetween(head, 8, 2);
    display(head);

    head = insertAtEnd(head, 7);
    display(head);

    head = deleteFromStart(head);
    display(head);

    head = deleteFromBetween(head, 2);
    display(head);

    head = deleteFromEnd(head);
    display(head);

    return 0;
}