#include "main.h"

/**
 * _strcat - Concatenates two strings together.
 * @dest: Destination foe the concatenated string.
 * @src: String to concatenate.
 *
 * Return: Result of the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int temp;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (temp = 0; src[temp] != '\0'; temp++)
	{
		dest[i + temp] = src[temp];
	}
	dest[i + temp] = '\0';

	return (dest);
}
