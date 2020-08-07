#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data) {
	t_list *neo;

	neo = mx_create_node(data);
	neo->next = *list;
	*list = neo;
}

