// put2.c

#include <stdio.h>
#include "headerfile.h"

int put2(const char * string) {

	int count = 0;
	while (*string) {

		putchar(*string++);
		count++;
	}
	putchar('\n');

	return(count);
}
