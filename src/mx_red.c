#include "../inc/libmx.h"

char *mx_red(char *src, int s1, int s2) {    
	char *neo = mx_strnew(s2 - s1 + 1);

	for (int x = 0; x <= s2 - s1; x++) {
		neo[x] = src[x + s1];
	}
	return neo;
}

