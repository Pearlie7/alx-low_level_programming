#include "main.h"
/**
* _isdigit - checks for digit from 0 to 9
* @c: digit to be checked
* Return: 1 if successful otherwise 0
*/

int _isdigit(int c)
{
	c = '0';

	if (c <= 9)
	{
		return (1);
	}
	return (0);
}
