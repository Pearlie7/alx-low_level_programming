#include "main.h"
/**
* _islower - checks for lowercase
* @c: the character to be checked in ASCII code
* Return: return 1 on successful
* otherwise return 0
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}

