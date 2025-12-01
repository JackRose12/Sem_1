#include <stdio.h>

int main() {
    int A[3][2], AT[2][3], result[3][3];
    int i, j, k;

    // Taking input for the 3x2 matrix
    printf("Enter elements of 3x2 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Finding transpose (2x3)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            AT[j][i] = A[i][j];
        }
    }

    // Multiplying A (3x2) × AT (2x3) = result (3x3)
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * AT[k][j];
            }
        }
    }

    // Displaying result
    printf("\nResultant 3x3 Matrix (A × Aᵀ):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
