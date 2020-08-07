#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {

	int x = *count;
	int lt = 0;
	int rt = size - 1;
	int m;

	if(*arr == NULL || !*arr) {
		return -1;
	}
	for (x = 0; lt <= rt; ++x) {
			m = rt + lt;
			m /= 2;

			*count = x + 1;
			if (mx_strcmp(arr[m], s) == 0) {
				*count = x + 1;
				return m;
			}
			else if (mx_strcmp(arr[m], s) > 0) {
				rt = m - 1;
			}
			else {
				lt = m + 1;
			}
	}
	*count = 0;
	return -1;
}

/*int main() {
	char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
	int count = 0;
	printf("return = %d\n", mx_binary_search(arr, 6, "ab", &count));
	printf("count = %d\n", count);
	return 0;
}*/

