#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	size_t x = 0;
	unsigned char *set = (unsigned char*)src;
	unsigned char *neo = (unsigned char*)dst;

	while (set[x] != c && x < n) {
		neo[x] = set[x];
		x++;
	}
	if (set[x] == c) {
		neo[x] = set[x];

		return &neo[x + 1];
	}
	return NULL;
}

