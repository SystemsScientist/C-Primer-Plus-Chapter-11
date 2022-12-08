// repeat.c -- main() with arguments
// note: There are two ways to process, compile
// and execute, this program.
//
// First method:
//
// 	$ gcc main.c -o main
// 	$ ./main Resistance is futile
//
// Second method:
//	
//	$ gcc main.c
// 	$ ./a.out Resistance is futile

#include <stdio.h>

int main(int argc, char *argv[]) {

	int count;

	printf("The command line has %d arguments: \n",
		argc - 1);
	for (count = 1; count < argc; count++)
		printf("%d: %s\n", count, argv[count]);
	printf("\n");
	
	return 0;
}
