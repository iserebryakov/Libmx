#include "../inc/libmx.h"

int mx_list_size(t_list *list) {
	int x = 0;
	t_list *neo = NULL;

	if (list) {
		neo = list;
		while (neo != NULL) {
			x++;
			neo = neo->next;
		}
	}
	return x;
}

