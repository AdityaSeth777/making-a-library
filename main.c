#include <stdio.h>
#include "func.h"

int main() {
    int arr[] = {9, 5, 7, 2, 8, 4, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using bubble sort
    bubble_sort(arr, n);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find the maximum element in the array
    int max = find_max(arr, n);
    printf("Maximum element: %d\n", max);

    // Find the minimum element in the array
    int min = find_min(arr, n);
    printf("Minimum element: %d\n", min);

    return 0;
}
