#include "main.h"

/**
 * print_line - Prints line.
 * @n: variable.
 *
 */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
			_putchar('_');
	}
	_putchar('\n');
}
