#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
	char *neo;
	int x;
	int id;

	if (sub == 0 || str == 0) {
		return -2;
	}

	x = mx_strlen(str);
	neo = mx_strstr(str, sub);

	if (neo == NULL) {
		return -1;
	}
	id = x - mx_strlen(neo);
	return id;
}

