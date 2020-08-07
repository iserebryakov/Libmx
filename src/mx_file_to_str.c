#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
	int neo = open(file, O_RDONLY);
	int x = 0;
	char teen;
	char *set;

	if (neo > 0) {
		while (read(neo, &teen, 1)) {
			x++;
		}
		close(neo);
		if (x > 0) {
			set = mx_strnew(x);
			neo = open(file, O_RDONLY);

			for (int z = 0; read(neo, &teen, 1); z++) {
				set[z] = teen;
			}
			close(neo);
			return set;
		}
	}
	return NULL;
}

