#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase letters.
 *
 * @c: variable
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	return (0);
}
