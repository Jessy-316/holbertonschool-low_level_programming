#include "main.h"

/**
 * _strncat - Concatenates two strings together.
 * @dest: Destination for the concatenated string.
 * @src: String to concatenate.
 * @n: Dictates at least how many bytes to use.
 *
 * Return: Result of the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
