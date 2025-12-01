#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // user input
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // print hollow rectangle
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {

            // print * for boundary rows and columns
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
