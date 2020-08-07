#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
	double x = 1;

	for (unsigned int i = 0; i < pow; i++) {
		x *= n;
	}
	return x;
}


/*int main() {
	printf("%f\n",mx_pow(3, 3));
	return 0;
}*/

