// put2.c -- prints a string and counts characters
// note: driver function added to test put2() function

#include <stdio.h>

int put2(const char *);

int main(void) {

	printf("I count %d characters.\n", put2("This is a test sentence for the put() function."));

	return 0;
}

int put2(const char * string) {

	int count = 0;
	while (*string) {
		
		putchar(*string++);
		count++;
	}
	putchar('\n');

	return(count);
}
