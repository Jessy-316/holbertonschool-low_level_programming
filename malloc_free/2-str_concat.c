#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Allocates space for concatenating strings.
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Return: Both strings concatenated.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	x = malloc(sizeof(char) * (i + j + 1));

	if (x == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		x[k] = s1[k];

	for (l = 0; s2[l] != '\0'; l++, k++)
		x[k] = s2[l];

	return (x);
}
