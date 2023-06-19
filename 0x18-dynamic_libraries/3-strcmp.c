#include "main.h"
/**
* _strcmp - compare pointers to string
* @s1: first pointer
* @s2: second pointer
* Return: result
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
