#include "main.h"
/**
 * -puts_recursion - prints a string followed by a new line
 * @s: input value
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
