#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
* Return: 0 when successful otherwise return 1
*/
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("error\n" );
		return (1);
	}
	return (0);
}