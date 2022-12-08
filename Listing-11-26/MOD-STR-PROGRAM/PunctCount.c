// PunctCount.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "headerfile.h"

int PunctCount(const char * str) {

	int ct = 0;
	while (*str) {

		if (ispunct(*str))
			ct++;
		str++;
	}

	return ct;
}
