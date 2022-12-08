// main.c -- drives program files
// compile and execute with ToUpper.c and PunctCount.c
// by using the following command-line scripts:
// $ gcc main.c ToUpper.c PunctCount.c -o main
// $ ./main

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "headerfile.h"

int main(void) {

	char line[LIMIT];

	puts("Please enter a line: ");
	fgets(line, LIMIT, stdin);
	line[strcspn(line, "\n")] = 0;

	ToUpper(line);
	puts(line);
	printf("That line has %d punctuation characters.\n",
		PunctCount(line));

	return 0;
}
