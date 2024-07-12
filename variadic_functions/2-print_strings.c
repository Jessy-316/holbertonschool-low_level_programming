#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Prints the strings.
 * @separator: Is the string to be printed between the strings.
 * @n: Is the number of strings passed to the function.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(str, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
