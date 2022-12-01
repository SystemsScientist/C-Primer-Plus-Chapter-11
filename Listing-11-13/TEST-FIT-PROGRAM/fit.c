// fit.c

#include <stdio.h>
#include <string.h>
#include "headerfile.h"

void fit(char *string, unsigned int size) {

	if (strlen(string) > size)
		*(string + size) = '\0';
}
