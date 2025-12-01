#include <stdio.h>

int main() {
    int n, i, j;
    int start, val;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // start value changes every 2 rows
        if ( ((i - 1) / 2) % 2 == 0 )
            start = 1;
        else
            start = 0;

        val = start;

        for (j = 1; j <= i; j++) {
            printf("%d", val);
            val = 1 - val;  // alternate 1 and 0
        }

        printf("\n");
    }

    return 0;
}
