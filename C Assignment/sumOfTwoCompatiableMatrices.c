#include <stdio.h>

void readMatrix(int rows, int cols, int mat[rows][cols])
{
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;

    printf("Enter dimensions of first matrix (rows cols): ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter dimensions of second matrix (rows cols): ");
    scanf("%d %d", &rows2, &cols2);

    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Error: matrices are not compatible for addition.\n");
        return 1;
    }

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols1];

    printf("Enter elements of first matrix:\n");
    readMatrix(rows1, cols1, mat1);

    printf("Enter elements of second matrix:\n");
    readMatrix(rows2, cols2, mat2);

    addMatrices(rows1, cols1, mat1, mat2, result);

    printf("The sum of the matrices is:\n");
    printMatrix(rows1, cols1, result);

    return 0;
}