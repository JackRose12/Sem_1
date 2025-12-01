#include <stdio.h>

int main() {
    int n, i, key;
    int found = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int positions[n];   // to store duplicate positions
    int posCount = 0;

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key value
    printf("Enter the key value to search: ");
    scanf("%d", &key);

    // Linear Search with duplicate detection
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[posCount] = i + 1; // store 1-based index
            posCount++;
            found = 1;
        }
    }

    // Output result
    if (!found) {
        printf("Key %d not found.\n", key);
    } else {
        printf("Key %d found at %d position(s):\n", key, posCount);
        for (i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }

    return 0;
}
