#include "../inc/libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
	while (*s1 == *s2) {
		if (*s1 == '\0' && *s2 == '\0') {
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

/*int main() {
	char x[] = "hello";
	char z[] = "hell";
	printf("Result: %d\n" , mx_strcmp(x, z));
	return 0;
}*/

