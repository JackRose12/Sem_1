#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    char ch;

    for (i = rows; i >= 1; i--) {
        
        // spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // alphabets
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}
