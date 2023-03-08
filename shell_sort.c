#include "func.h"

void shell_sort(int *arr, int n){
	int gap = n/2, i, j, key;
	while(gap > 0){
		i = 1;
		while(i < n){
			key = arr[i];
			j = i-gap;
			while(j >= 0 && arr[j] > key){
				arr[j+gap] = arr[j];
				j -= gap;
			}
			arr[j+gap] = key;
			i += 1;
		}
		gap >>= 1; /*fancy way of writting gap /= 2 using bitwise operator*/
	}
}
