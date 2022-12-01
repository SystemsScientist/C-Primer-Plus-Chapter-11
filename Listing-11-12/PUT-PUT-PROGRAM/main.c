// main.c 
// compile with put1.c and put2.c by using
// the following command-line scripts:
// $ gcc main.c put1.c put2.c -o main
// $ ./main

#include <stdio.h>
#include "headerfile.h"

int main(void) {

	put1("If I'd as much money.");
	put1(" as I could spend.\n");
	printf("I count %d characters.\n",
		put2("I never would cry old chairs to mend."));

	return 0;
}
