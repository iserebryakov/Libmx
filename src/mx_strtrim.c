#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {

	char *neo = NULL;
	int red = mx_strlen(str) - 1;
	int led = 0;

	if (!str) {
		return NULL;
	}

	while (str) {
		while (mx_isspace(str[red])) {
			red--;
		}
		while (mx_isspace(str[led])) {
			led++;
		}
		if (led > red) {
			return NULL;
		} 
		else {
			break;
		}
	}
	neo = mx_red((char*)str, led, red);
	return neo;
}

