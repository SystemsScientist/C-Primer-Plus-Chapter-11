// join_chk.c -- Joins two strings, check size first

#include <stdio.h>
#include <string.h> // declares the strncat() function
		    // buffers '\'
#define SIZE 30
#define BUGSIZE 13

int main(void) {

	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower?");
	fgets(flower, SIZE, stdin); // replace gets() with fgets()
	flower[strcspn(flower, "\n")] = 0; // added to buffer '\n'

	if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
		strcat(flower, addon);

	puts(flower);
	puts("What is your favorite bug?");
	fgets(bug, BUGSIZE, stdin); // replace gets() with fgets()
	bug[strcspn(bug, "\n")] = 0; // added to buffer '\n'
			
	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);

	return 0;
}
