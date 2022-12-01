// main.c -- drives program files
// compile with fit.c by using the
// following command-line scripts:
// $ gcc main.c fit.c -o main
// $ ./main

#include <stdio.h>
#include <string.h>
#include "headerfile.h"

int main(void) {

	char mesg[] = "Things should be as simple as possible,"
		      " but not simpler.";

	puts(mesg);
	fit(mesg, 38);
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg + 39);

	return 0;
}
