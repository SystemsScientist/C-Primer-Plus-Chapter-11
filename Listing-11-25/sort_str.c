// sort_str.c -- reads in strings and sorts them

#include <stdio.h>
#include <string.h>

#define SIZE 81		// string length limit, including \0
#define LIM 7		// maximum number of lines to be read
			// changed from 20 to 7 for testing purposes
#define HALT " "	// null string to stop input

void stsrt(char *strings[], int num);	// string-sort function

int main(void) {

	char input[LIM][SIZE];
	char *ptstr[LIM];
	int ct = 0;
	int k;

	printf("Input up to %d lines, and I will sort them.\n", LIM);
	printf("To stop, press the Enter key at a line's start.\n");
	while ((ct < LIM) && (fgets(input[ct], SIZE, stdin) != NULL) && (input[ct][0] != '\0')) {
		ptstr[ct] = input[ct];
		ct++;
	}
	stsrt(ptstr, ct);
	puts("\nHere's the sorted list: \n");
	for (k = 0; k < ct; k++)
		puts(ptstr[k]);

	return 0;
}

// string-pointer-sorting function
void stsrt(char *strings[], int num) {

	char *temp;
	int top, seek;

	for (top = 0; top < num - 1; top++) {
		for (seek = top + 1; seek < num; seek++) {
			if  (strcmp(strings[top], strings[seek]) > 0) {
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
		}
	}
}
