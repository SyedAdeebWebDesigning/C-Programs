#include <stdio.h>

// bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int arr2[] = {54, 24, 15, 2, 12, 1, 80};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nOriginal array 1: \n");
    printArray(arr1, n1);
    printf("\nOriginal array 2: \n");
    printArray(arr2, n2);

    bubbleSort(arr1, n1);
    selectionSort(arr2, n2);

    printf("\nSorted array (Bubble Sort): \n");
    printArray(arr1, n1);
    printf("\nSorted array (Selection Sort): \n");
    printArray(arr2, n2);
    return 0;
}