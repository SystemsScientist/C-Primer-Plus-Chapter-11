// str_cat.c -- joins two strings

#include <stdio.h>
#include <string.h> // declares the strcat() function and used to buffer

#define SIZE 80

int main(void) {

	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	fgets(flower, SIZE, stdin); // replace gets() with fgets()
	flower[strcspn(flower, "\n")] = 0; // added to buffer '\n'
	
	strcat(flower, addon);
	puts(flower);
	puts(addon);

	return 0;
}
