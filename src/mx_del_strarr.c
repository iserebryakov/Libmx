#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
	if (**arr) {
		if (*arr) {
			if (arr) {
				while (arr != NULL) {
					mx_strdel(*arr);
				}
			}
		}
	}
}

