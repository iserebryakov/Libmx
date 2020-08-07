#include "../inc/libmx.h"

char *mx_strdup(const char *s1) {

	char *sew = mx_strnew(mx_strlen(s1));

	if (sew == NULL) {
		return NULL;
	}
	mx_strcpy(sew, s1);

	return sew;
}


/*int main() {
	char str[] = "delorean";
	printf("%s\n", mx_strdup(str));
	return 0;
}*/

