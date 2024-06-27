#include "main.h"

/**
 * _memcpy - Copies an amount of memory area to another.
 * @dest: Where to copy.
 * @src: Where to copy from.
 * @n: Number of bytes to copy.
 *
 * Return: Final amount.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
