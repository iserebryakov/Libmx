#include "../inc/libmx.h"

void *mx_memset(void *b, int c, size_t len) {
	unsigned char *neo = (unsigned char*)b;

	while(len > 0) {
		*neo = (unsigned char)c;
		neo++;
		len--;
	}	
	return b;
}

