gcc -E $CFILE -o c		- To run a C file through preprocessor and save the file into another file
gcc $CFILE -c			- To run a C file through compilation and assembler but not link the file,
gcc $CFILE -S			- To generate assembly code of a C code
gcc $CFILE -o cisfun		- To compile a C file and create an executable called cisfune
#include <stdio.h>
/**
*main - say something about main
*Return: say something about return
*/
int main (void)
	puts(\"Programming is like building a multilingual puzzle);
	return (0);
Line 5 to 12 writes a program that print the above sentence without using printf

#include <stdio.h>
/**
*main - say something about main
*Return: say something about return
*/
int main (void)
	 puts("with proper grammar, but the outcome is a piece of art,\n));
return (0);
Line 15 to 22 writes a program that print the above sentence     with using  printf

