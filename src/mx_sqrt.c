#include "../inc/libmx.h"

int mx_sqrt(int x) {
	int root = 1;

	while(x / root >= root) {
		if (root * root == x) {
			return root;
		}
		root++;
	}
	return 0;
}

/*int main () {
	printf("Square root: %d\n", mx_sqrt(121));
	return 0;
}*/

