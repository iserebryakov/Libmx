#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
	char *doc;
	int fix = 0;
	int z;
	int x;

	for (z = 0; z < size; z++) {
		for (x = z; x < size; x++) {
			if (arr[z] != '\0') {
				if (mx_strcmp(arr[z], arr[x]) > 0) {
					doc = arr[x];
					arr[x] = arr[z];
					arr[z] = doc;
					fix++;
				}
			}
		}
	}		
	return fix;
}

/*int main() {
	char *arr[] = {"abc", "xyz", "ghi", "def"};
	printf("%d\n", mx_bubble_sort(arr, 4));
	return 0;
}*/

