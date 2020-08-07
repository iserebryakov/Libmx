#include "../inc/libmx.h"

int mx_insertion_sort(char **arr, int size) {
	char *bash;
	int neo;
	int x;
	int a;

	neo = 0;
	for (x = 1; x < size; ++x) {
		for (a = x; a > 0 && mx_strlen(arr[a - 1]) > mx_strlen(arr[a]); --a) {
			bash = arr[a];
			arr[a] = arr[a - 1];
			arr[a - 1] = bash;
			++neo;
		}
	}
	return neo;
}

