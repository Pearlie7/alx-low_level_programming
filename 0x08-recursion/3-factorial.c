#include "main.h"
/**
  * factorial - input value
  * @n: input value
  * Return:int value
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
		return (1);
			return (n * factorial(n - 1));
}
