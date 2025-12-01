#include <stdio.h>

int main() {
    int n, i, j;

    // taking user input
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {        // rows
        for (j = 1; j <= i; j++) {    // columns
            if (j % 2 == 1)
                printf("1");          // odd position → 1
            else
                printf("0");          // even position → 0
        }
        printf("\n");
    }

    return 0;
}
