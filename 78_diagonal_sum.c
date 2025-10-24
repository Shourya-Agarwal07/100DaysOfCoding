// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix entered:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
