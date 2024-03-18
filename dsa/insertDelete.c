#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int size, int element, int position)
{
    if (position < 0 || position > size)
    {
        printf("Invalid position!\n");
        return;
    }

    if (size >= MAX_SIZE)
    {
        printf("Array is full!\n");
        return;
    }

    for (int i = size - 1; i >= position; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;

    printf("Element %d inserted successfully at position %d.\n", element, position);
}

void deleteElement(int arr[], int size, int position)
{
    if (position < 0 || position >= size)
    {
        printf("Invalid position!\n");
        return;
    }

    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Element at position %d deleted successfully.\n", position);
}

int main()
{
    int arr[MAX_SIZE];
    int size, element, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert at: ");
    scanf("%d", &position);

    insertElement(arr, size, element, position);
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position to delete from: ");
    scanf("%d", &position);

    deleteElement(arr, size, position);
    size--;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
