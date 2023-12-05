#include <stdio.h>

void readWriteArray(int num)
{
    int myArr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the value of %d element of the array: ", i);
        scanf("%d", &myArr[i]);
    }
    for (int j = 0; j < num; j++)
    {
        printf("%d\n", myArr[j]);
    }
}

int main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    readWriteArray(num);
    return 0;
}