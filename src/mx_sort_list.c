#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
	t_list *x = lst;
	t_list *z = x->next;
	t_list *neo;
	void *set;

	if (!cmp || !lst) {
		return NULL;
	}
	while (x->next != NULL) {
		neo = x;
		set = x->data;

		while (z != NULL) {
			if (cmp(neo->data, z->data)) {
				neo = z;
			}
			z = z->next;
		}
		x->data = neo->data;
		neo->data = set;
		x = x->next;
	}
	return lst;
}

