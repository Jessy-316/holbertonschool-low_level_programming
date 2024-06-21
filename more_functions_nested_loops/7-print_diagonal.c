#include "main.h"

/**
 * print_diagonal - prints diagonal with "\".
 * @n: Times to print.
 */
void print_diagonal(int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
