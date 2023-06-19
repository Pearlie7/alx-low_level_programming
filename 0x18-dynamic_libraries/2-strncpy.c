#include "main.h"
/**
* _strncpy - copies values
* @dest: input value
* @src: input value
* @n: maximum number of bytes to be copied from src
* Return: a pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
		int a;

		a = 0;
		while (a < n && src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		while (a < n)
	{
			dest[a] = '\0';
			a++;
	}
	return (dest);
}
