#include <stdio.h>
// TODO: Implement bubble sort
int main()
{
    int arr[] = {4, 3, 2, 5, 6};
    int i = 0;
    // Bubble sort
    while (1)
    {
        int temp;
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        printf("%d ", arr[i]);
        i += 1;
        if (i > 4)
        {
            break;
        }
    }

    return 0;
}