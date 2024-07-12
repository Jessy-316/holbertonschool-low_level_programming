#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - Prints numbers.
 * @separator: Is the string to be printed between numbers.
 * @n: Is the number of integers passed to the function.
 *
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
