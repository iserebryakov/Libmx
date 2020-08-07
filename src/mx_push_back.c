#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
	t_list *x = mx_create_node(data);
	t_list *neo = NULL;
	if (list) {
		if (*list) {
			neo = *list;
			while(neo->next) {
				neo = neo->next;
			}
			neo->next = x;
		}
		else {
			*list = x;
		}
	}
}

