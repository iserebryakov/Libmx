#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
	int x = 0;

	if (!str) {
		return -2;
	}
	while (str[x] != 0) {
		if (str[x] == c) {
			return x;
		}
		x++;
	}
	return -1;
}

