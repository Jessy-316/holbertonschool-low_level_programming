#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a char type element from va_list.
 * @list: va_list passed to function.
 */
void print_char(va_list print)
{
	printf("%c", va_arg(print, int));
}

/**
 * print_int - Prints an integer type element from va_list.
 * @list: va_list passed to function.
 */
void print_int(va_list print)
{
	printf("%d", va_arg(print, int));
}

/**
 * print_float - Prints a float type element from va_list.
 * @list: va_list passed to function.
 */
void print_float(va_list print)
{
	printf("%f", va_arg(print, double));
}

/**
 * print_str - Prints a a string element from va_list.
 * @list: va_list passed to function.
 */
void print_str(va_list print)
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

	check storage[] = {
		{ "c", printchar },
		{ "f", printfloat },
		{ "s", printstr },
		{ "i", printint }
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
