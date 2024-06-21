#include "main.h"

/**
 * print_square - Print square of 2 and 10 with '#'.
 * @size: The character to print.
 */

void print_square(int size)
{
	int j, k;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
