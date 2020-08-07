#include "../inc/libmx.h"

char *mx_strcpy(char *dst, const char *src) {
	int x = 0;

	while (src[x]) {
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return dst;
}

/*int main() {
	char str1[] = "terra";
	char str2[0];
	printf("%s\n", mx_strcpy(str2, str1));
	return 0;
}*/

