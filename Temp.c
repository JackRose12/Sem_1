#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;

    // Taking user input
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {           // loop for rows
        for (j = 1; j <= i; j++) {       // loop for printing numbers
            printf("%d", num);
            num++;
        }
        printf("\n");                    // move to next line
    }

    return 0;
}
