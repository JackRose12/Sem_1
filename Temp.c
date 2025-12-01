#include <stdio.h>

int main() {
    int i, j;
    int num = 1;  // starting number

    // 4 rows because pattern has 4 lines
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;      // increase number each time
        }
        printf("\n");
    }

    return 0;
}
