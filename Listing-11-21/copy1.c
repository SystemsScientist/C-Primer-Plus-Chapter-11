// copy1.c -- strcpy() demo

#include <stdio.h>
#include <string.h> // declares strcpy()

#define SIZE 40
#define LIM 5

int main(void) {

	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d words beginning with q: \n", LIM);
	// replace gets() with fgets()
	while (i < LIM && fgets(temp, SIZE, stdin)) { 

		if (temp[0] != 'q') {
			temp[strcspn(temp, "\n")] = 0; // added to buffer '\n'
			printf("%s doesn't begin with q!\n", temp);
		} else {
			strcpy(qwords[i], temp);
			temp[strcspn(temp, "\n")] = 0; // added to buffer '\n'
			i++;
		}
	}
	puts("Here are the words accepted: ");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]); // prints correct list, but with '\n'

	return 0;
}
