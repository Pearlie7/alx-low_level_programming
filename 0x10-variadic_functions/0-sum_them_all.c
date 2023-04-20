#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sun_them_all - Return the sum of all the parameters
  *@n: the number of parameters passed to function
  @...:
  *Return: ..
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
