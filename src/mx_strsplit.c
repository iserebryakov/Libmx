#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {

	int neo = mx_count_words(s, c);
	int z = 0;
	char **str = (char **) malloc(sizeof(char *) * (neo + 1));
	char *def;
	char *set;

	if (!s) {
		return NULL;
	}
	for (int x = 0; x < neo; x++) {
		while (*s == c) {
			s++;
		}
		def = (char *) s;
		z = 0;
		while (*s != c) {
			z++;
			s++;
		}
		set = mx_strnew(z);
		mx_strncpy(set, def, z);
		str[x] = set;
	}
	return str;
}

