#include "../inc/libmx.h"

void mx_printstr(const char *s) {
	write(1, s, mx_strlen(s));
}

/*int main() {
	char set[] = "hollywood";
	printf("Your string: \n");
	mx_printstr(set);
	printf("\n");
	return 0;
}*/

