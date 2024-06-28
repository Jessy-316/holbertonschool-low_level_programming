#include "main.h"

/**
 * _memset - Fills an amount of memory area to another.
 * @s: A pointer to the memory area to be filled.
 * @b: Value to fill.
 * @n: Number of bytes to fill.
 *
 * Return: Final amount.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
