#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Taking number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort in Descending Order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing sorted array
    printf("Array in Descending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
