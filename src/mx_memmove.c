#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
	unsigned char neo[len];

	mx_memcpy(neo, src, len);
	mx_memcpy(dst, neo, len);
	return dst;
}

