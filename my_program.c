#include <stdio.h>
#include "func.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Function implementation
}


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
    return 0;
}
//Aditya Seth