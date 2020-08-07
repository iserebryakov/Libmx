#include "../inc/libmx.h"

t_list  *mx_create_node(void *data) {
	t_list *neo = malloc(sizeof(t_list));

	neo->data = data;
	neo->next = NULL;
	return neo;
}

