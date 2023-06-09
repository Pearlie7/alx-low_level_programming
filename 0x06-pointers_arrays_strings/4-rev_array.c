#include "main.h"
/**
* reverse_array - reverse the content of an array of integer
* @a: input value
* @n: the number of element in the array
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
