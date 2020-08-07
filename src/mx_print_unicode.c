#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {  
	if (c < 128) {
		char neo = c;
		write(1, &neo, 1);
	}
	else if (c < 2048) {
		char neo[2];
		neo[0] = (c >> 6 & 0x1f) | 0xc0;
		neo[1] = (c >> 0 & 0x3f) | 0x80;
		write(1, neo, 2);
	}
	else if (c < 65536) {
		char neo[3];
		neo[0] = (c >> 12 & 0x0f) | 0xe0;
		neo[1] = (c >> 6 & 0x3f) | 0x80;
		neo[2] = (c >> 0 & 0x3f) | 0x80;
		write(1, neo, 3);
		}
	else if (c < 1114112) {
		char neo[4];
		neo[0] = (c >> 18 & 0x07) | 0xf0; 
		neo[1] = (c >> 12 & 0x0f) | 0x80;
		neo[2] = (c >> 6 & 0x3f) | 0x80;
		neo[3] = (c >> 0 & 0x3f) | 0x80;
		write(1, neo, 4);
	}
}

