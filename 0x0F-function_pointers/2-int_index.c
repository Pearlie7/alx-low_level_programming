#include "function_pointers.h"
/**
  *int_index - returns the index of the first element
  *@array: array
  *@size: number of element in the array
  @cmp: pointer to the funtion to be used to
  *compare values
  *Return: 1 or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (1);
				i++;
			}
		}
	}
	return (-1);
}
