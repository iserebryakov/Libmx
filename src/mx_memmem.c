#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	unsigned char *bg = (unsigned char*)big;
	unsigned char *lt = (unsigned char*)little;
	size_t x = 0;
	size_t z = 0;
	int s = 0;

	while (x < big_len) {
		s = 1;
		while(z < little_len) {
			if (x + z >= big_len) {
					return 0;
			}
			if (bg[x + z] != lt[z]) {
					s = 0;
					break;
			}
			z++;
		}
		if (s == 1) {
			return &bg[x];
		}
		x++;
	}
	return NULL;
}

