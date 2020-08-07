#include "../inc/libmx.h"

void mx_strdel(char **str) {
	if (str == NULL)
		return ;
	if (*str && str) {
		free(*str);
		*str = NULL;
	}
}

