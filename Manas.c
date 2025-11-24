#include <stdio.h>

int main() {
    int i, j, rows;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {

        // print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // print alphabets
        ch = 'A';
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
            ch++;
            if (ch > 'Z') ch = 'A';  // wrap-around if more than Z
        }

        printf("\n");
    }

    return 0;
}
