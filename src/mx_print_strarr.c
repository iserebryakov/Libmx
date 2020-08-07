#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
	int x = 0;

	if (arr != NULL) {
		if(delim != NULL) {
			while (arr[x] != NULL) {
				mx_printstr(arr[x]);
				if (arr[x + 1] != NULL) {
					mx_printstr(delim);
				}
			++x;
			}
		mx_printstr("\n");
		}
	}
}

