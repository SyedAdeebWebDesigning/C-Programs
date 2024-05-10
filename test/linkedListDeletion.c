#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *display(struct node *head)
{
    struct node *ptr = head;
    printf("\n");
    while (ptr != NULL)
    {
        printf("Element data: %d, Element address: %p\n", ptr->data, ptr);
        ptr = ptr->next;
    }
    printf("\n");
    return head;
}

// Case 1
struct node *deleteFromFirstNode(struct node *head)
{
    printf("|---------- DELETE FROM FIRST NODE ----------|\n");
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2
struct node *deleteFromBetween(struct node *head, int index)
{

    printf("|---------- DELETE FROM BETWEEN ----------|\n");
    struct node *ptr = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = q->next;
    free(q);
    return head;
}

// Case 3
struct node *deleteFromLastNode(struct node *head)
{
    printf("|---------- DELETE FROM LAST NODE ----------|\n");
    struct node *ptr = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    ptr->next = q->next;
    free(q);
    return head;
}

// Case 4
struct node *deleteFromGivenValue(struct node *head, int value)
{
    printf("|---------- DELETE FROM HANDLE VALUE ----------|\n");
    struct node *ptr = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    if (q->data == value)
    {
        ptr->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 0;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = fifth;

    fifth->data = 8;
    fifth->next = NULL;

    head = display(head);

    head = deleteFromGivenValue(head, 6);
    head = display(head);

    head = deleteFromFirstNode(head);
    head = display(head);

    head = deleteFromBetween(head, 1);
    head = display(head);

    head = deleteFromLastNode(head);
    head = display(head);

    return 0;
}