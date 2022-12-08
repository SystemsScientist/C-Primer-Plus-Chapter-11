// ToUpper.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "headerfile.h"

void ToUpper(char * str) {

	while (*str) {

		*str = toupper(*str);
		str++;
	}
}
