#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
	int z = right;
	int x = left;
	int neo = (left + right) / 2;
	int set = 0;
	char *buf;

	if (!arr) {
		return -1;
	}
	while (x <= z) {
		while (mx_strlen(arr[x]) < mx_strlen(arr[neo])) {
			++x;
		}
		while (mx_strlen(arr[z]) > mx_strlen(arr[neo])) {
			--z;
		}
		if (x <= z && mx_strlen(arr[x]) != mx_strlen(arr[z])) {
			buf = arr[x];
			arr[x] = arr[z];
			arr[z] = buf;
			set++;
		}
		--z;
		++x;
		if (left < z) {
			set = set + mx_quicksort(arr, left, z);
		}
		if (x < right) {
			set = set + mx_quicksort(arr, x, right);
		}
	}
	return set;
}

