#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	const unsigned char *neo = (unsigned char*)s;
	unsigned char set = c;
	unsigned int x = 0;

	while (x < n) {
		if (neo[x] == set) {
			neo = neo + x;
			return (void*)neo;
		}
		x++;
	}
	return NULL;
}

/*int main() {
	void *red = NULL; 
	char x[10] = "delorean";
	red = mx_memchr(x, 'l', 5);
}*/

