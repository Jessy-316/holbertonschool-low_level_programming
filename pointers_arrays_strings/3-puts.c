#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: Pointer to print on string.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
