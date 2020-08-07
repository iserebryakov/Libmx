#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	unsigned long x = n;
	unsigned long z = 0;
	unsigned long neo = mx_strlen(s1);
	char *wer = mx_strnew(x);

	if(neo <= x) {
		mx_strcpy(wer, s1);
	}
	else { 
		if(neo > x) {
			while(z <= x) {
				wer[z] = s1[z];
				z++;
			}
		}
	}
	return wer;
}

