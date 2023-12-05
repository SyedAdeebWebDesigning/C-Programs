#include <stdio.h>
void linearSearch(int arr[], int num, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            printf("(Linear Search): Element %d found at index %d\n", num, i);
            break;
        }

        // Check If number is not in the list.
        if (i == size - 1)
        {
            printf("(Linear Search): Element %d not found in the array\n", num);
        }
    }
}
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    // Sorting an array is required in bubble sort
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)

            return mid;

        else if (arr[mid] < target)

            low = mid + 1;

        else

            high = mid - 1;
    }
    return -1;
}

int main()
{
    int size;
    int num;
    printf("Enter the size of The Array: ");
    scanf("%d", &size);
    int newArray[size];
    // Creating an array assuming that it avoids Pigeonhole principle
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d index: ", i);
        scanf("%d", &newArray[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    linearSearch(newArray, num, size);
    int target = num;
    int result = binarySearch(newArray, size, target);
    if (result != -1)
    {
        printf("(Binary Search): Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("(Binary Search): Element %d not found in the array\n", target);
    }
    return 0;
}