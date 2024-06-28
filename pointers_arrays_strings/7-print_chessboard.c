#include "main.h"

/**
 * print_chessboard - Creates a chessboard.
 * @a: The rows of array.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
		}
	}
}
