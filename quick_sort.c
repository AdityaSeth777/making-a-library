#include "func.h"

int partition(int *arr, int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    int j, temp;
    for (j = left; j <= right-1; j++) {
        if (arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[right];
    arr[right] = temp;
    return i+1;
}

void quick_sort(int *arr, int left, int right) {
    if (left < right) {
        int pivot = partition(arr, left, right);
        quick_sort(arr, left, pivot-1);
        quick_sort(arr, pivot+1, right);
    }
}
