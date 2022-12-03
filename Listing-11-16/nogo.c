// nogo.c -- will this work?
// use ctrl-c to end program

#include <stdio.h>
#include <string.h> // buffers '\n'

#define ANSWER "Grant"

int main(void) {

	char try[40];

	puts("Who is buried in Grant's tomb?");
	fgets(try, 40, stdin); // replace gets() with fgets()
	try[strcspn(try, "\n")] = 0; // added to buffer '\n'
		
	while (try != ANSWER) {
		puts("No, that's wrong. Try again.");
		fgets(try, 40, stdin); // replace gets() with fgets()
		try[strcspn(try, "\n")] = 0; // added to buffer '\n'
	}
	puts("That's right!");

	return 0;
}
