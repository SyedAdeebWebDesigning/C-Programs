#include <stdio.h>

int main()
{
    int number;
    printf("Enter the total numbers: ");
    scanf("%d", &number);

    int arr[number];
    int sum = 0;
    float value = 0;
    if (number > 0)
    {
        for (int i = 0; i < number; i++)
        {
            printf("Enter the value: ");
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        value = (float)sum / number;

        printf("The sum is %d\n", sum);
        printf("The average is %.2f\n", value);
    }
    else
    {
        printf("number should be greater than 0 \n");
    }

    return 0;
}