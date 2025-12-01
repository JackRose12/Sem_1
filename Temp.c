#include <stdio.h>

int main() {
    int n, i, j;

    // user input
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
