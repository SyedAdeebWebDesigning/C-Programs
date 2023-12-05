#include <stdio.h>

void addMatrices(int row1, int col1, int a[10][10], int row2, int col2, int b[10][10])
{
    int add[10][10], row = row1, col = col1;

    if (row1 != row2 || col1 != col2)
    {
        printf("Matrices cannot be added as they are non-conformable\n");
        return;
    }

    printf("Sum of Matrices is: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
}
void multiplyMatrices(int row1, int col1, int a[10][10], int row2, int col2, int b[10][10])
{
    int mul[10][10], row = row1, col = col2;

    if (col1 != row2)
    {
        printf("Matrices cannot be multiplied as they are non-conformable\n");
        return;
    }

    printf("Product of Matrices is: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            mul[i][j] = 0;
            for (int k = 0; k < col1; ++k)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int row, int col, int a[10][10])
{
    int trans[10][10];

    printf("Transpose of the Matrix is: \n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            trans[j][i] = a[i][j];
            printf("%d ", trans[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int row1, col1, row2, col2, a[10][10], b[10][10];

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col1; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrices(row1, col1, a, row2, col2, b);
    multiplyMatrices(row1, col1, a, row2, col2, b);
    transposeMatrix(row1, col1, a);

    return 0;
}