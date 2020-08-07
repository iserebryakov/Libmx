#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
	int x = 0; 
	int z = 0;
	int mark = 0;
	int neo = 0;
	char *set = mx_strnew(mark);
	char *def = mx_strnew(mark);
	unsigned long a = nbr;

	while(a != 0) {
			a /= 16;
			mark++;
	}
	if (nbr == 0) {
		def[0] = '0';
	}
	while(nbr != 0) {    
		neo = 0; 
		neo = nbr % 16;
		if (neo < 10) { 
			set[x] = neo + '0'; 
			x++; 
		} 
		else { 
			set[x] = neo + 87; 
			x++; 
		} 		
		nbr /= 16; 
	}
	while(mark > 0) {
		def[z] = set[mark - 1];
		++z;
		--mark;
	}
	return def;
}

