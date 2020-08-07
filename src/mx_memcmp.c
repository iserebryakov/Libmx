#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
	unsigned char *neo = (unsigned char *)s1;
	unsigned char *set = (unsigned char *)s2;

	if (n == 0) {
		return 0;
	}
	while (n--) {
		if (*neo != *set) {
			return *neo - *set;
		}
		neo++;
		set++;
	}
	return 0;
}

