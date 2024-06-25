#include "main.h"

/**
 * _strcpy - Copies the pointed string.
 * @dest: Pointer of the buffer from which the string is copied.
 * @src: The string we copy.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
