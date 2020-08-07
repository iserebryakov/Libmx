#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
	int x = 0;
	
	while (x < len) {
		if (src[x]) {
			dst[x] = src[x];
		}
		else {
			while (len > x) {
				dst [x] = '\0';
				x++;
			}
		}
		x++;
	}
	return dst;
}

