#include "../inc/libmx.h"

int mx_count_substr(const char *str, const  char *sub) {
	const char *neo = str;
	int buf = 0;

	if (sub == NULL || str == NULL) {
		return -1;
	}
	while ((neo = mx_strstr(neo, sub)) != '\0') {
			neo++;
			buf++;
	}
	return buf;
}

