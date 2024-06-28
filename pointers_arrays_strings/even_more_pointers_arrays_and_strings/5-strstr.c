#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the substring.
 * @haystack: The string to search.
 * @needle: The substring to search.
 *
 * Return: Resolution.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
