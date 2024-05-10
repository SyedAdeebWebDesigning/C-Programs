#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 5, 12, 65, 78, 123, 657, 1234};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 23;

    int linearSearchIndex = linearSearch(arr, size, element);
    int binarySearchIndex = binarySearch(arr, size, element);

    printf("Binary Search: Element %d found at index %d\n", element, binarySearchIndex);
    printf("Linear Search: Element %d found at index %d\n", element, linearSearchIndex);

    return 0;
}