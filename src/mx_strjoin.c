#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
	char *neo;
	int x = 0;

	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}
	else if (s1 == NULL) {
		if (!(neo = mx_strdup(s2)))
			return NULL;
	}
	else if (s2 == NULL) {
		if (!(neo = mx_strdup(s1)))
			return NULL;
	}
	else {
		x = mx_strlen(s1) + mx_strlen(s2);
		neo = mx_strnew(x);
		mx_strcat(neo, s1);
		mx_strcat(neo, s2);
	}
	return neo;
}

