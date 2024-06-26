#include "main.h"

/**
 * _strspn - Gets the length of a substring.
 * @s: Segment to return bytes from.
 * @accept: Dictates the bytes to include.
 *
 * Return: The number of bytes that consist with @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
