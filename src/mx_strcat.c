#include "../inc/libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
	int x;
	int wer = mx_strlen(s1);

	for (x = 0; s2[x] != '\0'; x++) {
		s1[wer + x] = s2[x];
	}
	s1[wer + x] = '\0';
	return s1;
}

