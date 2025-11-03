#include <stdio.h>

int main() {
    int a, b, c, max, min;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum using ternary operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Find minimum using ternary operator
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Display results
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
