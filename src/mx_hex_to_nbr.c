#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {

	unsigned long neo = 0;
	long wert = 0;
	int x = 0;

	while (hex[x] != '\0') {

		if (hex[x] >= '0' && hex[x] <= '9') {
			wert *= 16;
			wert += hex[x] - '0';
		}
		else if (hex[x] >= 'a' && hex[x] <= 'z') {
			wert *= 16;
			wert += hex[x] - 'a' + 10;
		}
		else if (hex[x] >= 'A' && hex[x] <= 'Z') {
			wert *= 16;
			wert += hex[x] - 'A' + 10;
		}
		neo = wert;
		x++;
	}
	return neo;
}

/*int main() {
	char ui[] = "C4";
	printf("Your unsigned long number: %lu\n", mx_hex_to_nbr(ui));
	return 0;
}*/

