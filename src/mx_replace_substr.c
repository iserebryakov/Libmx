#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int x = 0;
	int z = 0;
	int b = 0;
	char *neo = mx_strdup(str);

	if (!replace || !sub || !str) {
		return NULL;
	}
	for (int a = 0; a < mx_strlen(neo); a++) {
		for (b = 0; b < mx_strlen(sub); b++) {
			if (sub[b] != '\n' && neo[a] == sub[b]) {
				a++;
				b++;
				if (b == mx_strlen(sub)) {
					x = b;
				}
			}
			else if (neo[a] != sub[b]) {
				a++;
			}
		}
	}
	x = b + 1;
	while (z <= mx_strlen(replace)) {
		neo[x] = replace[z];
		z++;
		x++;
		b++;
	}	
	return neo;
}

