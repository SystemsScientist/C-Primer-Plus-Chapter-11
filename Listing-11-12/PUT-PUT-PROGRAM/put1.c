// put1.c

#include <stdio.h>
#include "headerfile.h"

void put1(const char * string) {

	while (*string)
		putchar(*string++);
}
