#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * printchar - Prints a char type element from va_list.
 * @list: va_list passed to function.
 */
void printchar(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * printint - Prints an integer type element from va_list.
 * @list: va_list passed to function.
 */
void printint(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * printfloat - Prints a float type element from va_list.
 * @list: va_list passed to function.
 */
void printfloat(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 */
void printstr(va_list print)
{
	char *s;

	s = va_arg(print, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - Prints anything passed onto it no matter the type.
 * @format: String of formats given.
 *
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list print;
	char *var;

	va_start(print, format);
	va_end(print);
	printf("\n");
}
