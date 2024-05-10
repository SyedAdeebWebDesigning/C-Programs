// bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
// The pass through the list is repeated until the list is sorted.
// Time complexity is O(n^2) in worst and average case and O(n) in best case.
// Space complexity is O(1).

//? Algorithm:
//  1. Start from the first element, compare it with the next element of the array.
//  2. If the first element is greater than the next element, swap them.
//  3. Continue this process until the last element.
//  4. Repeat the above steps for all elements of the array.

#include <stdio.h>

/**
 * Sorts an array of integers in ascending order using the bubble sort algorithm.
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
 */
void bubbleSort(int arr[], int n)
{
    int temp, i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array before sorting: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    bubbleSort(arr, n);
    printf("Array after sorting: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}