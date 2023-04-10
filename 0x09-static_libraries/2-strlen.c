#include <string.h>
#include "main.h"
/**
* _strlen - checks the length of a string
* @s: string to be checked
* Return: integer
*/

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
