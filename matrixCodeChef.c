#include <stdio.h>

int main() {
    int a[2][2], b[2][3], c[3][2], temp[2][2], d[2][2];
    int i, j, k;

    // Input for Matrix A (2x2)
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    // Input for Matrix B (2x3)
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    // Input for Matrix C (3x2)
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &c[i][j]);

    // Step 1: Multiply A (2x2) × B (2x3) ? Store in temp[2][3]
    int tempResult[2][3] = {0};  // Intermediate result
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            tempResult[i][j] = 0;
            for (k = 0; k < 2; k++) {
                tempResult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Step 2: Multiply temp (2x3) × C (3x2) ? Store in D (2x2)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            d[i][j] = 0;
            for (k = 0; k < 3; k++) {
                d[i][j] += tempResult[i][k] * c[k][j];
        }
        }
    }

    // Print the final matrix D (2x2)
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

}
