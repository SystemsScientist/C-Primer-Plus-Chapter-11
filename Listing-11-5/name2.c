// name2.c -- reads a name

#include <stdio.h>
#include <string.h> // used to buffer '\n'

#define MAX 81

int main(void) {

	char name[MAX];
	char * ptr;

	printf("Hi, what's your name?\n");
	ptr = fgets(name, MAX, stdin); // replace gets() with fgets()
	
	name[strcspn(name, "\n")] = 0; // added to buffer '\n'
	printf("%s? Ah! %s!\n", name, ptr);

	return 0;
}
