#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    // Create the head node
    struct Node *head = createNode(1);

    // Create additional nodes
    struct Node *second = createNode(2);
    struct Node *third = createNode(3);

    // Link the nodes together
    head->next = second;
    second->next = third;

    // Traverse and print the linked list
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
