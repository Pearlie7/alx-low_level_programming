#include "function_pointers.h"
/**
  *array_iterator - a given function
  *@array:  array to execute function on
  *@size: size of the array
  *@action: a pointer to the function you need to use
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
