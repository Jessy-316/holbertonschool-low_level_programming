#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: String to be compared with s2.
 * @s2: String to be compared with s1.
 * @result: Result of the comparing of strings.
 *
 * Return: 0 if equal, <0 if less and >0 if more.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++, s2++;
	}

	return (*s1 - *s2);
}
