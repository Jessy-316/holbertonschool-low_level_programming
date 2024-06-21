#include "main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int j, k;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (k = size - j; k > 0; k--)
				_putchar(' ');

			for (k = 0; k < j; k++)
				_putchar('#');

			if (j == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
