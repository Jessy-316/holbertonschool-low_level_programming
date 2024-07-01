#include "main.h"
/**
 * _strlen - Prints the count of a string.
 * @s: String to count.
 *
 * Return:
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
