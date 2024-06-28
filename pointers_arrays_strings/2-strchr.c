#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string we are checking.
 * @c: Dictates the character we are specifically looking for.
 *
 * Return: Returns the pointer based on @c, or null if nothing is found.
 * @s: Return NULL if no character is found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
