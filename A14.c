#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the key value to search: ");
    scanf("%d", &key);

    // Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Key %d not found in the array.\n", key);
    }

    return 0;
}
