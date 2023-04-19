#include "function_pointers.h"
/**
  *print_name - a function that points to a name
  *@name: the given name
  *@f: functon of the name
  *Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
