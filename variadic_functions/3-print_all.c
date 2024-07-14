#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - Prints a char type element from va_list.
 * @list: va_list passed to function.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints an integer type element from va_list.
 * @list: va_list passed to function.
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints a float type element from va_list.
 * @list: va_list passed to function.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_str - Prints a a string element from va_list.
 * @list: va_list passed to function.
 */
void print_str(va_list list)
{
	char *s;

	s = va_arg(list, char *);
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

	check storage[] = {
		{ "c", print_char },
		{ "f", print_float },
		{ "s", print_str },
		{ "i", print_int }
	};

	i = 0;
	var = "";
	va_start(print, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", var);
			storage[j].f(print);
			var = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(print);
}
