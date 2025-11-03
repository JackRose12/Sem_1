#include <stdio.h>

int main() {
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Using ternary operator to check leap year
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)
        ? printf("%d is a leap year.\n", year)
        : printf("%d is not a leap year.\n", year);

    return 0;
}
