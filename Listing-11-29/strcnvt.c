// strcnvt.c -- try strtol()
// note: enter ctrl-c to exit

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char number[30];
	char * end;
	long value;

	puts("Enter a number (empty line to quit: ");
	while (fgets(number, 30, stdin) && number[0] != '\0') {
		
		number[strcspn(number, "\n")] = 0;
		value = strtol(number, &end, 10); // base 10
		printf("value: %ld, stopped at %s (%d) \n",
			value, end, *end);

		value = strtol(number, &end, 16); // base 16
		printf("value: %ld, stopped at %s (%d) \n",
			value, end, *end);

		puts("Next number: ");
	}
	puts("Bye! \n");

	return 0;
}
