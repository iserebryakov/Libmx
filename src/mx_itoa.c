#include "../inc/libmx.h"

char *mx_itoa(int number) {
	long int x = number;
	int neo = mx_black(x);
	int m = 0;
	char *buf;

	buf = mx_strnew(neo);
	if (x < 0) {
		buf[0] = '-';
		x = x * -1;
		m++;
	}
	if (x == 0) {
		buf[0] = '0';
		return buf;
	}
	for (int z = neo - 1; z >= m; --z) {
		buf[z] = (x % 10) + '0';
		x = x / 10;
	}
	return buf;
}

