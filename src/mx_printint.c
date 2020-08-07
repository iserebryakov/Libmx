#include "../inc/libmx.h"

void mx_printint(int n) {
	long neo = n;

	if (neo < 0) {
		mx_printchar('-');
		neo = -neo;
	}
	if (neo > 9)
		mx_printint(neo / 10);
	mx_printchar(neo % 10 + 48);
}


/*int main() {
	mx_printint(2147483647);
	printf("\n");
	return 0;
}*/

