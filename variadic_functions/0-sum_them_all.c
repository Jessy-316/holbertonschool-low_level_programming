#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sums all the given arguments.
 * @n: Number of parameters.
 *
 * Return: Total sum of everything.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;

	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
	{
		va_end(arguments);
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		x += va_arg(arguments, int);
	}

	va_end(arguments);

	return (x);
}
