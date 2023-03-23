#include <stdio.h>
#include <math.h>
/**
* main - main entry
* Return: 0
*/

int main(void)
{
	long x, maxn;
	long number = 612852475143;
	double sqr = sqrt(number);

	for (x = 1; x <= sqr; x++)
	{
		if (number % x == 0)
		{
			maxn = number / x;
		}
	}
	printf("%ld\n", maxn);
	return (0);
}
