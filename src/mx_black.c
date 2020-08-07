#include "../inc/libmx.h"

int mx_black(long n) {
	unsigned int set = 0;

	if (n < 0) {
		n = n * -1;
		set++;
	}
	while (n > 0) {
		n = n / 10;
		set++;
	}
	return set;
}

