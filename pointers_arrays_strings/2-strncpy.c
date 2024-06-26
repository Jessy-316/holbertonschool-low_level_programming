#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination for the copied string.
 * @src: String to copy.
 * @n: Number of characters to copy.
 *
 * Return: Result of the copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
