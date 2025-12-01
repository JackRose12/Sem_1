#include <stdio.h>

int main() {
    int n, i, j;

    // user input
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // print hollow triangle
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {

            // boundary conditions
            if (j == 1 || j == i || i == n) {
                printf("*");   // boundary stars
            } else {
                printf(" ");   // inside space
            }
        }
        printf("\n");
    }

    return 0;
}
