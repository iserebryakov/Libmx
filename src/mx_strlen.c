#include "../inc/libmx.h"

int mx_strlen(const char *s) {
	int len = 0;

	while(s[len] != '\0') {
		len++;
	}
	return len;
}

/*int main() {
	char def[] = "overclocking";
	printf("Number of characters in string: %d\n", mx_strlen(def));
	return 0;
}*/

