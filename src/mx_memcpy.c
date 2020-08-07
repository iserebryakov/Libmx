#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
	char *neo = (char*)src;
	char *set = (char*)dst;

	while(n > 0) {
		*set++ = *neo++;
		--n;
	}
	return dst;
}

