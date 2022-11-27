// name1.c -- reads a name

#include <stdio.h>
#include <string.h> // used to buffer '\n'

#define MAX 81

int main(void) {

	char name[MAX]; // allot space
	
	printf("Hi, what's your name?\n");
	fgets(name, MAX, stdin);

	name[strcspn(name, "\n")] = 0; // added to buffer '\n'
	printf("Nice name, %s.\n", name);

	return 0;
}
