#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
	int neo = mx_strlen(s);
	
	for (int x = 0; x < neo / 2; x++) {
		mx_swap_char(&s[x], &s[neo - x - 1]);
	}
}

