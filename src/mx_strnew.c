#include "../inc/libmx.h"

char *mx_strnew(const int size) {
	char *str = (char*)malloc(size + 1);
	int x;
	if(str == NULL) {
		return NULL;
	}
	for (x  = 0; x < size; x++){
		str[x] = '\0';
	}
	str[size] = '\0';
	return str;
}

/*int main() {
	printf("%s\n", mx_strnew(10));
	return 0;
}*/

