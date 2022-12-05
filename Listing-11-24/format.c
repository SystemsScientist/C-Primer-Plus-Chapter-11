// format.c -- format a string

#include <stdio.h>
#include <string.h> // provides strcspn()

#define MAX 20

int main(void) {

	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts("Enter your first name: ");
	fgets(first, MAX, stdin); 	 // replace gets() with fgets()
	first[strcspn(first, "\n")] = 0; // added to buffer '\n'

	puts("Enter your last name: ");
	fgets(last, MAX, stdin); 	 // replace gets(0 with fgets()
	last[strcspn(last, "\n")] = 0;	 // added to buffer '\n'

	puts("Enter your prize money: ");
	scanf("%lf", &prize);

	sprintf(formal, "%s, %-19s: $%6.2f \n", 
		last, first, prize);
	puts(formal);

	return 0;
}
