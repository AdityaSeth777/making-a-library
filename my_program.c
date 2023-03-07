#include <stdio.h>
#include "func.h"
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Function implementation
}

void printArray(int *arr, int n){
	int i = 0;
	while(i < n){
		printf("%d ", arr[i]);
		i += 1;
	}
	printf("\n");
}
//Ayush Ghosal

int main() {
    int arr[] = {9, 5, 7, 2, 8, 4, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using bubble sort
    bubble_sort(arr, n);

    // Print the sorted array
    printArray(arr, n);
    return 0;
}
//Aditya Seth
