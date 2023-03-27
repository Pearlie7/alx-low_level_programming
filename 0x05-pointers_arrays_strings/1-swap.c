#include "main.h"
/**
* swap_int - A function that swaps the value of two integers
* @a: the first integer
* @b: the second integer
* Return: void
*/

void swap_int(int *a, int *b)
{

	int i;

	i = *a;
	*a = *b;
	*b = i;
}
