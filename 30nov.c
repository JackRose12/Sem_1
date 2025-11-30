#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);   // taking user input (no spaces)

    // printing first 5 characters
    printf("%.*s\n", 5, str);

    // printing next 3 characters with 1 space before
    printf(" %.*s\n", 3, str + 5);

    // printing next 1 character with 2 spaces before
    printf("  %.*s\n", 1, str + 8);

    return 0;
}
