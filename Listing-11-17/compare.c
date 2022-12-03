// compare.c -- this will work

#include <stdio.h>
#include <string.h> // declares strcmp() 

#define ANSWER "Grant"
#define MAX 40

int main(void) {

	char try[MAX];

	puts("Who is buried in Grant's tomb?");
	fgets(try, MAX, stdin); // replace gets() with fgets()
	try[strcspn(try, "\n")] = 0; // added to buffer '\n'

	while (strcmp(try, ANSWER) != 0) {

		puts("No, that's wrong. Try again.");
		fgets(try, MAX, stdin); // replace gets() with fgets()
		try[strcspn(try, "\n")] = 0; // added to buffer '\n'
	}
	puts("That's right!");

	return 0;
}
