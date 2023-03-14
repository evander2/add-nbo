// add.cpp
#include "add.h"

uint32_t add(uint32_t a, uint32_t b) {
	uint32_t tmp = a + b;
	return tmp;
}


uint32_t num(unsigned char *str) {
        uint32_t a = (uint32_t)str[0] << 24 |
        	     (uint32_t)str[1] << 16 |
        	     (uint32_t)str[2] << 8  |
        	     (uint32_t)str[3];

	return a;
}


