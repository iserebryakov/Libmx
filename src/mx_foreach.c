#include "../inc/libmx.h"

void mx_foreach(int *arr, int size, void (*f)(int)) {
	int x;

	for (x = 0; x < size; x++) {
		f(arr[x]);
	}
}

/*int main() {
	int arr[] = {1, 2, 3, 4, 5};
	mx_foreach(arr, 5, mx_printint);
	printf("%d\n", (int)*arr);
	return 0;
}*/

