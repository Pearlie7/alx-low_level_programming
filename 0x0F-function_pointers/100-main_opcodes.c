#include <stdio.h>
#include <stdlib.h>

/**
  *print_opcodes - prints the opcodes
  *@a: address of the main funtion
  *@n: number of bytes to prints
  */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
  *main - prints opcodes of main function
  *@argc: number of argument passed to the function
  *@argv: array of pointers to the arguments
  *Return: 0
  */
int main(int argc, char **argv)
{
	int n;

		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
