#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char *wert = mx_strtrim(str);
	char *neo;
	int x = 0;
	int z = 0;

	while (wert[x] != '\0') {
		if (mx_isspace(wert[x])) {
			wert[z] = ' ';
			while (mx_isspace(wert[x])) {
				x++;
			}
			z++;
		}
		wert[z++] = wert[x++];
	}
	wert[z] = '\0';
	neo = mx_strnew(z);
	neo = mx_strncpy(neo, wert, z+1);
	mx_strdel(&wert);
	return neo;
}

