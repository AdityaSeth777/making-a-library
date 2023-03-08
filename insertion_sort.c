#include "func.h"

void insertion_sort(int *arr, int n){
	int i = 1, j, key;
	while(i < n){
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j -= 1;
		}
		arr[j+1] = key;
		i += 1;
	}
}
