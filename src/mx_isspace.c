#include "../inc/libmx.h"

bool mx_isspace(char c) {
	if (c == ' ' || c == '\r' || c == '\t' || c == '\v' || c == '\f' || c == '\n') {
		return 1;
	}
	else {
		return 0;
	}
}

