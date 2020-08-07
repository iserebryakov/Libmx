#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	void *neo;

	if (ptr == NULL) {
		return neo = mx_strnew(size);
	}
	else {
		neo = mx_strnew(size);
		if (neo == NULL) {
			return NULL;
		}
		mx_memcpy(neo, ptr, size);
		free(ptr);
	}
	return neo;
}

