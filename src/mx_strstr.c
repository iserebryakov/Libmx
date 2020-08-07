#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
	char *x = (char*)haystack;

	if (*needle == '\0') {
		return x;
	}
	while (*haystack != '\0') {
		x = (char*) haystack;

		while (*haystack != '\0' && *needle == *haystack) {
			++needle;
			++haystack;
		}
		haystack = x + 1;
	}
	return NULL;
}

