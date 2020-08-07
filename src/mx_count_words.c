#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
	int set = 0;
	int neo = 0;
	int x = 0;

	if (!str) {
		return -1;
	}
	if (str[0] != c && str[1] == c) {
		set = 1;
	}
	while (str[x] != '\0') {
		neo = 0;
		x++;
		while (str[x] != '\0') {
			if (neo == 0 && str[x] != c) {
				neo = 1;
				set++;
			}
			else if (str[x] == c) {
				neo = 0;
			}
			x++;
		}
	}
	return set;
}

