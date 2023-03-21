#include "main.h"

/**
* print_sign - prints the sign of numbers
* @n: character to be checked
* Return: 1 is > 0, return 0 if = 0 or return -1 if < 0
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
