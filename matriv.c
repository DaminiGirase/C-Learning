#include <stdio.h>

void inputMatrix(int matrix[100][100], int rows, int cols)
{
	int i,j;
    for ( i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        scanf("%d", &matrix[i][j]);
    }
}

void printMatrix(int matrix[100][100], int rows, int cols)
{
	int i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[100][100], int B[100][100], int C[100][100], int m, int n, int p, int q)
{
    if (n != p)
    {
        printf("Matrix multiplication is not possible. The number of columns of A must be equal to the number of rows of b.");
        return;
    }
    int i,j;
for( i = 0; i < m; i++)
    {
        for( j = 0; j< q; j++)
        C[i][j] = 0;
    }
    int i,j,k;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < q; j++)
        {
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[100][100], B[100][100], C[100][100];
    int m, n, p, q;

    scanf("%d %d", &m, &n);
    scanf("%d %d", &p, &q);
 if (n != p)
    {
        printf("Matrix multiplication is not possible. The number of columns of A must be equal to the number of rows of B.\n");
        return 0;
    }

    inputMatrix(A, m, n);
    inputMatrix(B, p, q);

    multiplyMatrices(A, B, C, m, n, p, q);

    printMatrix(C, m, q);

    return 0;
}
