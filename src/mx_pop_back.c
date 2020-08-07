#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
	t_list *neo = NULL;

	if (*head && head && (*head)->next) {
		neo = *head;
		while (neo->next->next) {
			neo = neo->next;
		}
		free(neo->next);
		neo->next = NULL;
	}
	else if (*head && head) {
		free(*head);
		*head = NULL;
	}
}

