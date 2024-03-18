#include <stdio.h>

float calculateAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return (float)sum / size;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    float average = calculateAverage(arr, size);
    printf("The average value of the array elements is: %.2f\n", average);

    return 0;
}
