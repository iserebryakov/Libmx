#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
	unsigned char *neo = (unsigned char *)s + mx_strlen(s);

	while (n > 0) {
		if (*neo == (unsigned char)c) {
			return neo;
		}
	--neo;
	}
	return NULL;
}

