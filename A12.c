#include <stdio.h>

int main() {
    int i, j;
    int n = 3;          // number of rows
    char ch = 'a';

    /* Pattern (i)
           *
          ***
         *****
    */
    for (i = 1; i <= n; i++) {
        // spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // stars
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    printf("\n");   // gap between patterns

    /* Pattern (ii)
         abcde
          fgh
           i
    */
    ch = 'a';       // reset character

    for (i = n; i >= 1; i--) {
        // spaces
        for (j = 1; j <= n - i; j++)
            printf(" ");

        // letters
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
