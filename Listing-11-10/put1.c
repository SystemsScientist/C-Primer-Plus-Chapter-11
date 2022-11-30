// put1.c -- prints a string without adding '\n'
// note: driver function added to test put1() function

#include <stdio.h>

void put1(const char * string);

int main(void) {

	put1("This is a test of the put1() function!\n");

	return 0;
}

void put1(const char * string) {

	while (*string != '\0')
		putchar(*string++);
}
