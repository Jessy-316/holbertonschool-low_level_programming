#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for a set of bytes.
 * @s: The sring we search.
 * @accept: The bytes to search for.
 *
 * Return: the result.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
