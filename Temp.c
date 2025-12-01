#include <stdio.h>

int main(void) {
    int rows, cols;
    int i, j;

    // get matrix size from user
    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1) return 1;
    printf("Enter number of columns: ");
    if (scanf("%d", &cols) != 1) return 1;

    if (rows <= 0 || cols <= 0) {
        printf("Rows and columns must be positive integers.\n");
        return 1;
    }

    int a[rows][cols];
    int b[cols][rows]; // transpose will be cols x rows

    // input matrix
    printf("Enter values in the %dx%d matrix (row-wise):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &a[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // print original matrix
    printf("\n1st matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // compute transpose
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            b[i][j] = a[j][i];
        }
    }

    // print transpose
    printf("\nTranspose matrix is:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
